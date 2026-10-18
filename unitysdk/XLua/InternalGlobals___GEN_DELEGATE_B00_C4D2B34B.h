#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_0_16E4307DCC419505_503;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_C4D2B34B_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14DA8420)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_C4D2B34B_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14DA8450)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_C4D2B34B_INVOKE_OFFSET UNITYSDK_OFFSET(0x14DA8410)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_C4D2B34B__CTOR_OFFSET UNITYSDK_OFFSET(0x14DA8320)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_C4D2B34B_TypeDefinitionIndex = 50101;

	class InternalGlobals___GEN_DELEGATE_B00_C4D2B34B : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_C4D2B34B__CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* Invoke(::Class_0_16E4307DCC419505_503* a1)
		{
			return ((::System::String*(*)(::PVOID, ::Class_0_16E4307DCC419505_503*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_C4D2B34B_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Class_0_16E4307DCC419505_503* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Class_0_16E4307DCC419505_503*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_C4D2B34B_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::String* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_C4D2B34B_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
