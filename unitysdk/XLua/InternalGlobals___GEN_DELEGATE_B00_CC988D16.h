#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_0_16E4307DCC419505_503;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_CC988D16_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14DB3FA0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_CC988D16_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14DB3FD0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_CC988D16_INVOKE_OFFSET UNITYSDK_OFFSET(0x14DB3F90)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_CC988D16__CTOR_OFFSET UNITYSDK_OFFSET(0x14DB3EA0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_CC988D16_TypeDefinitionIndex = 50100;

	class InternalGlobals___GEN_DELEGATE_B00_CC988D16 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_CC988D16__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::Class_0_16E4307DCC419505_503* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_503*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_CC988D16_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Class_0_16E4307DCC419505_503* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Class_0_16E4307DCC419505_503*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_CC988D16_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_CC988D16_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
