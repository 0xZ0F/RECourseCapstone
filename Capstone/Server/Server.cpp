#include <iostream>

#include "../Common/DebugPrint.h"
#include "../IOCP/ServerLib/IOCP.hpp"

bool ProcessPacketCb(IOCP::IOCPContext& context)
{
	std::string data{};
	context.GetBufferContents(data);

	DEBUG_PRINT("ProcessPacketCb(): %s\n", data.c_str());
	return true;
}

bool MoreDataCb(const std::string_view& recvd, size_t& amountLeft)
{
	return false;
}

int main(int argc, char** argv)
{
	DEBUG_PRINT("Debug On\n");

	IOCP::IOCP iocp{};
	if(!iocp.Begin(9000))
	{
		return -1;
	}

	std::getchar();

	return 0;
}