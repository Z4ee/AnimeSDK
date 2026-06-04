#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::GameCore { class JsonEnum; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE37_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12E88F00)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE37_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12E88F40)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE37_INVOKE_OFFSET UNITYSDK_OFFSET(0x12E88EF0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE37__CTOR_OFFSET UNITYSDK_OFFSET(0x12E88E00)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE37_TypeDefinitionIndex = 46953;

	class InternalGlobals___GEN_DELEGATE37 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE37__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::Il2CppArray<::RPG::GameCore::JsonEnum*>* a1, ::RPG::GameCore::JsonEnum* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::JsonEnum*>*, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE37_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::RPG::GameCore::JsonEnum*>* a1, ::RPG::GameCore::JsonEnum* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::JsonEnum*>*, ::RPG::GameCore::JsonEnum*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE37_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE37_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
