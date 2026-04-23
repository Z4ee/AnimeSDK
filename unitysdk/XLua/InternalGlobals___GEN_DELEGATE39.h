#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::GameCore { class JsonEnum; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE39_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11220670)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE39_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x112206B0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE39_INVOKE_OFFSET UNITYSDK_OFFSET(0x112200B0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE39__CTOR_OFFSET UNITYSDK_OFFSET(0x11212FE0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE39_TypeDefinitionIndex = 46365;

	class InternalGlobals___GEN_DELEGATE39 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE39__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::Il2CppArray<::RPG::GameCore::JsonEnum*>* jsonEnumList, ::Il2CppArray<::RPG::GameCore::JsonEnum*>* jsonEnumList2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::JsonEnum*>*, ::Il2CppArray<::RPG::GameCore::JsonEnum*>*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE39_INVOKE_OFFSET))(this, jsonEnumList, jsonEnumList2);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::RPG::GameCore::JsonEnum*>* jsonEnumList, ::Il2CppArray<::RPG::GameCore::JsonEnum*>* jsonEnumList2, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::JsonEnum*>*, ::Il2CppArray<::RPG::GameCore::JsonEnum*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE39_BEGININVOKE_OFFSET))(this, jsonEnumList, jsonEnumList2, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE39_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
