#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class Uri; }
namespace System::Net { class IAuthenticationModule; }
namespace System::Net { class NetworkCredential; }
namespace System::Net { class WebRequest; }

namespace System::Net
{
	inline static constexpr unsigned int ICredentialPolicy_TypeDefinitionIndex = 3539;

	class ICredentialPolicy
	{
	public:
	};
}
