#include "OnvifAdapter.h"
#include "OnvifChannel.h"

JO_IMPLEMENT_INTERFACE(Adapter, "onvif", COnvifAdapter::Maker)

COnvifAdapter::COnvifAdapter(int nDvrId, const char *pAddr, int nPort, const char *pUsername, const char *pPassword)
{
	memset(m_remoteIP, 0, sizeof(m_remoteIP));
	memset(m_username, 0, sizeof(m_username));
	memset(m_password, 0, sizeof(m_password));

	m_remotePort = nPort;
	strcpy(m_remoteIP, pAddr);
	strcpy(m_username, pUsername);
	strcpy(m_password, pPassword);

	m_status = jo_dev_ready;

	J_OS::LOGINFO("COnvifAdapter::COnvifAdapter(ip = %s, port = %d)", pAddr, nPort);
}

COnvifAdapter::~COnvifAdapter()
{

}

J_DevStatus COnvifAdapter::GetStatus() const
{
	return m_status;
}

int COnvifAdapter::Broken()
{
    m_status = jo_dev_broken;
	return J_OK;
}

int COnvifAdapter::MakeChannel(const char *pResid, J_Obj *&pObj, J_Obj *pOwner, int nChannel, int nStream, int nMode)
{
	COnvifChannel *pChannel = new COnvifChannel(pResid, pOwner, nChannel, nStream,
			nMode);
	if (NULL == pChannel)
		return J_MEMORY_ERROR;

	pObj = pChannel;

	return J_OK;
}
