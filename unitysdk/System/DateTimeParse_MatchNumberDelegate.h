#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/System/__DTString.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_DATETIMEPARSE_MATCHNUMBERDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x162A5150)
#define SYSTEM_DATETIMEPARSE_MATCHNUMBERDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x162A5200)
#define SYSTEM_DATETIMEPARSE_MATCHNUMBERDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x162A3BF0)
#define SYSTEM_DATETIMEPARSE_MATCHNUMBERDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x162A5130)

namespace System
{
	inline static constexpr unsigned int DateTimeParse_MatchNumberDelegate_TypeDefinitionIndex = 254;

	class DateTimeParse_MatchNumberDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_MATCHNUMBERDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::__DTString& str, ::System::Int32 digitLen, ::System::Int32& result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::__DTString&, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_MATCHNUMBERDELEGATE_INVOKE_OFFSET))(this, str, digitLen, result);
		}

		::System::IAsyncResult* BeginInvoke(::System::__DTString& str, ::System::Int32 digitLen, ::System::Int32& result, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::__DTString&, ::System::Int32, ::System::Int32&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_MATCHNUMBERDELEGATE_BEGININVOKE_OFFSET))(this, str, digitLen, result, callback, object);
		}

		::System::Boolean EndInvoke(::System::__DTString& str, ::System::Int32& result, ::System::IAsyncResult* __result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::__DTString&, ::System::Int32&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_MATCHNUMBERDELEGATE_ENDINVOKE_OFFSET))(this, str, result, __result);
		}
	};
}
