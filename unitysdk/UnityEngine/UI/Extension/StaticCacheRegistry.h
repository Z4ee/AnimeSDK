#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_UI_EXTENSION_STATICCACHEREGISTRY_CLEARALL_OFFSET UNITYSDK_OFFSET(0x1BF51AF0)
#define UNITYENGINE_UI_EXTENSION_STATICCACHEREGISTRY_REGISTER_OFFSET UNITYSDK_OFFSET(0x1BF519C0)
#define UNITYENGINE_UI_EXTENSION_STATICCACHEREGISTRY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF51C80)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int StaticCacheRegistry_TypeDefinitionIndex = 63283;

	class StaticCacheRegistry : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Action*>** StaticGet__clearCallbacks()
		{
			return (::System::Collections::Generic::List_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(StaticCacheRegistry_TypeDefinitionIndex)->GetStaticField(0x47250);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_STATICCACHEREGISTRY__CCTOR_OFFSET))();
		}

		static ::System::Void Register(::System::Action* clearCallback)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_STATICCACHEREGISTRY_REGISTER_OFFSET))(clearCallback);
		}

		static ::System::Void ClearAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_STATICCACHEREGISTRY_CLEARALL_OFFSET))();
		}
	};
}
