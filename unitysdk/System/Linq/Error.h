#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class String; }

#define SYSTEM_LINQ_ERROR_ARGUMENTNULL_OFFSET UNITYSDK_OFFSET(0x19EC3350)
#define SYSTEM_LINQ_ERROR_ARGUMENTOUTOFRANGE_OFFSET UNITYSDK_OFFSET(0x19EC2EE0)
#define SYSTEM_LINQ_ERROR_MORETHANONEELEMENT_OFFSET UNITYSDK_OFFSET(0x19EC5160)
#define SYSTEM_LINQ_ERROR_MORETHANONEMATCH_OFFSET UNITYSDK_OFFSET(0x19EC5200)
#define SYSTEM_LINQ_ERROR_NOELEMENTS_OFFSET UNITYSDK_OFFSET(0x19EC40F0)
#define SYSTEM_LINQ_ERROR_NOMATCH_OFFSET UNITYSDK_OFFSET(0x19EC52A0)
#define SYSTEM_LINQ_ERROR_NOTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x19EC5340)

namespace System::Linq
{
	inline static constexpr unsigned int Error_TypeDefinitionIndex = 3120;

	class Error : public ::System::Object
	{
	public:
		static ::System::Exception* ArgumentNull(::System::String* s)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ERROR_ARGUMENTNULL_OFFSET))(s);
		}

		static ::System::Exception* ArgumentOutOfRange(::System::String* s)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ERROR_ARGUMENTOUTOFRANGE_OFFSET))(s);
		}

		static ::System::Exception* MoreThanOneElement()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ERROR_MORETHANONEELEMENT_OFFSET))();
		}

		static ::System::Exception* MoreThanOneMatch()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ERROR_MORETHANONEMATCH_OFFSET))();
		}

		static ::System::Exception* NoElements()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ERROR_NOELEMENTS_OFFSET))();
		}

		static ::System::Exception* NoMatch()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ERROR_NOMATCH_OFFSET))();
		}

		static ::System::Exception* NotSupported()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ERROR_NOTSUPPORTED_OFFSET))();
		}
	};
}
