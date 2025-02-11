#ifndef __CONTROLMANAGER_H_
#define __CONTROLMANAGER_H_
#include "j_includes.h"
#ifdef WIN32
#include "x_asio_win.h"
#else
#include "x_asio.h"
#endif

#define MAX_READ_SIZE 1024
#define TEST_JO_UI

class JO_API CControlManager : public J_AsioUser
{
	public:
		CControlManager();
		~CControlManager();

	public:
		///AsioUser
		virtual j_result_t OnAccept(const J_AsioDataBase *pAsioData, int nRet);
		virtual j_result_t OnRead(const J_AsioDataBase *pAsioData, int nRet);
		virtual j_result_t OnWrite(const J_AsioDataBase *pAsioData, int nRet);
		virtual j_result_t OnBroken(const J_AsioDataBase *pAsioData, int nRet);

		///CStreamManager
		j_result_t StartService(j_int32_t nPort, const j_char_t *pCommandType);
		j_result_t StopService();
	private:
		J_CommandParser *m_pCommandParser;
		j_int32_t m_nPort;
		J_AsioDataBase m_asioData;
		j_char_t m_read_buff[2048];
		j_string_t m_serviceType;
		CXAsio m_asio;
};

#endif //~__CONTROLMANAGER_H_
