#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::GameCore { class JsonEnum; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE37_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xFF567E0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE37_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xFF56820)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE37_INVOKE_OFFSET UNITYSDK_OFFSET(0xFF56220)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE37__CTOR_OFFSET UNITYSDK_OFFSET(0xFF49DF0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE37_TypeDefinitionIndex = 40454;

	class InternalGlobals___GEN_DELEGATE37 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE37__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::Il2CppArray<::RPG::GameCore::JsonEnum*>* jsonEnumList, ::RPG::GameCore::JsonEnum* jsonEnum)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::JsonEnum*>*, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE37_INVOKE_OFFSET))(this, jsonEnumList, jsonEnum);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::RPG::GameCore::JsonEnum*>* jsonEnumList, ::RPG::GameCore::JsonEnum* jsonEnum, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::JsonEnum*>*, ::RPG::GameCore::JsonEnum*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE37_BEGININVOKE_OFFSET))(this, jsonEnumList, jsonEnum, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE37_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
