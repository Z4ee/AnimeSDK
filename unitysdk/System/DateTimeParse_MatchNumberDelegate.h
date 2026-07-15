#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/System/__DTString.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_DATETIMEPARSE_MATCHNUMBERDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18D09600)
#define SYSTEM_DATETIMEPARSE_MATCHNUMBERDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18D096B0)
#define SYSTEM_DATETIMEPARSE_MATCHNUMBERDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18D084C0)
#define SYSTEM_DATETIMEPARSE_MATCHNUMBERDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18D09580)

namespace System
{
	inline static constexpr unsigned int DateTimeParse_MatchNumberDelegate_TypeDefinitionIndex = 253;

	class DateTimeParse_MatchNumberDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_MATCHNUMBERDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::System::__DTString& a1, ::System::Int32 a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::__DTString&, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_MATCHNUMBERDELEGATE_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::__DTString& a1, ::System::Int32 a2, ::System::Int32& a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::__DTString&, ::System::Int32, ::System::Int32&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_MATCHNUMBERDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean EndInvoke(::System::__DTString& a1, ::System::Int32& a2, ::System::IAsyncResult* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::__DTString&, ::System::Int32&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEPARSE_MATCHNUMBERDELEGATE_ENDINVOKE_OFFSET))(this, a1, a2, a3);
		}
	};
}
