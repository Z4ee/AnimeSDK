#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int DefaultPorts_TypeDefinitionIndex = 3325;

	enum class DefaultPorts : ::System::Int32
	{
		DEFAULT_FTP_PORT = 21,
		DEFAULT_GOPHER_PORT = 70,
		DEFAULT_HTTP_PORT = 80,
		DEFAULT_HTTPS_PORT = 443,
		DEFAULT_NNTP_PORT = 119,
		DEFAULT_SMTP_PORT = 25,
		DEFAULT_TELNET_PORT = 23,
	};
}
