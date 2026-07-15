#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net { class ServicePoint; }
namespace System::Net { class WebRequest; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }

namespace System::Net
{
	inline static constexpr unsigned int ICertificatePolicy_TypeDefinitionIndex = 2734;

	class ICertificatePolicy
	{
	public:
	};
}
