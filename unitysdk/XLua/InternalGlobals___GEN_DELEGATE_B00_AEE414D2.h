#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::GameCore { class JsonEnum; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_AEE414D2_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14B1E0E0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_AEE414D2_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14B1E120)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_AEE414D2_INVOKE_OFFSET UNITYSDK_OFFSET(0x14B1E0D0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_AEE414D2__CTOR_OFFSET UNITYSDK_OFFSET(0x14B1DFE0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_AEE414D2_TypeDefinitionIndex = 50522;

	class InternalGlobals___GEN_DELEGATE_B00_AEE414D2 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_AEE414D2__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::Il2CppArray<::RPG::GameCore::JsonEnum*>* a1, ::Il2CppArray<::RPG::GameCore::JsonEnum*>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::JsonEnum*>*, ::Il2CppArray<::RPG::GameCore::JsonEnum*>*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_AEE414D2_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::RPG::GameCore::JsonEnum*>* a1, ::Il2CppArray<::RPG::GameCore::JsonEnum*>* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::JsonEnum*>*, ::Il2CppArray<::RPG::GameCore::JsonEnum*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_AEE414D2_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_AEE414D2_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
