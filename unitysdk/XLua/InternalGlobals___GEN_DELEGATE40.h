#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_0_16E4307DCC419505_358;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE40_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12E89490)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE40_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12E894D0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE40_INVOKE_OFFSET UNITYSDK_OFFSET(0x12E89480)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE40__CTOR_OFFSET UNITYSDK_OFFSET(0x12E89390)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE40_TypeDefinitionIndex = 46956;

	class InternalGlobals___GEN_DELEGATE40 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE40__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::Class_0_16E4307DCC419505_358* a1, ::System::String*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_358*, ::System::String*&))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE40_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::Class_0_16E4307DCC419505_358* a1, ::System::String*& a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Class_0_16E4307DCC419505_358*, ::System::String*&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE40_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean EndInvoke(::System::String*& a1, ::System::IAsyncResult* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE40_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
