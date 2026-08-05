#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class DefaultControls_IFactoryControls; }

#define UNITYENGINE_UI_DEFAULTCONTROLS_DEFAULTRUNTIMEFACTORY_CREATEGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1EAE3090)
#define UNITYENGINE_UI_DEFAULTCONTROLS_DEFAULTRUNTIMEFACTORY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAE3140)
#define UNITYENGINE_UI_DEFAULTCONTROLS_DEFAULTRUNTIMEFACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x1EAE3130)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int DefaultControls_DefaultRuntimeFactory_TypeDefinitionIndex = 19201;

	class DefaultControls_DefaultRuntimeFactory : public ::System::Object
	{
	public:
		static ::UnityEngine::UI::DefaultControls_IFactoryControls** StaticGet_Default()
		{
			return (::UnityEngine::UI::DefaultControls_IFactoryControls**)Il2CppClass::FromTypeDefinitionIndex(DefaultControls_DefaultRuntimeFactory_TypeDefinitionIndex)->GetStaticField(0x87C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_DEFAULTRUNTIMEFACTORY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_DEFAULTRUNTIMEFACTORY__CCTOR_OFFSET))();
		}

		::UnityEngine::GameObject* CreateGameObject(::System::String* name, ::Il2CppArray<::System::Type*>* components)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_DEFAULTRUNTIMEFACTORY_CREATEGAMEOBJECT_OFFSET))(this, name, components);
		}
	};
}
