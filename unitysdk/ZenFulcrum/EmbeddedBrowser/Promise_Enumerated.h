#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZenFulcrum::EmbeddedBrowser { class Promise; }

#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_ENUMERATED_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1FBC3350)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_ENUMERATED_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1FBC32C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_ENUMERATED_RESET_OFFSET UNITYSDK_OFFSET(0x1FBC3340)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_ENUMERATED__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBC32B0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Promise_Enumerated_TypeDefinitionIndex = 33362;

	class Promise_Enumerated : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Promise* promise; // 0x10
		::System::Boolean abortOnFail; // 0x18

		::System::Void _ctor(::ZenFulcrum::EmbeddedBrowser::Promise* promise, ::System::Boolean abortOnFail)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::Promise*, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_ENUMERATED__CTOR_OFFSET))(this, promise, abortOnFail);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_ENUMERATED_MOVENEXT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_ENUMERATED_RESET_OFFSET))(this);
		}

		::System::Object* get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_ENUMERATED_GET_CURRENT_OFFSET))(this);
		}
	};
}
