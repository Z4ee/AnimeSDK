#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI { class IClipper; }
namespace UnityEngine::UI::Collections { template <typename T> class IndexedSet_1; }

#define UNITYENGINE_UI_CLIPPERREGISTRY_CULL_OFFSET UNITYSDK_OFFSET(0x19BEFC20)
#define UNITYENGINE_UI_CLIPPERREGISTRY_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x19BEFBB0)
#define UNITYENGINE_UI_CLIPPERREGISTRY_REGISTER_OFFSET UNITYSDK_OFFSET(0x19BF0C50)
#define UNITYENGINE_UI_CLIPPERREGISTRY_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x19BF0CE0)
#define UNITYENGINE_UI_CLIPPERREGISTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x19BF0C10)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ClipperRegistry_TypeDefinitionIndex = 5859;

	class ClipperRegistry : public ::System::Object
	{
	public:
		static ::UnityEngine::UI::ClipperRegistry** StaticGet_s_Instance()
		{
			return (::UnityEngine::UI::ClipperRegistry**)Il2CppClass::FromTypeDefinitionIndex(ClipperRegistry_TypeDefinitionIndex)->GetStaticField(0x3CD00);
		}
		::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::IClipper*>* m_Clippers; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CLIPPERREGISTRY__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::UI::ClipperRegistry* get_instance()
		{
			return ((::UnityEngine::UI::ClipperRegistry*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CLIPPERREGISTRY_GET_INSTANCE_OFFSET))();
		}

		::System::Void Cull()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CLIPPERREGISTRY_CULL_OFFSET))(this);
		}

		static ::System::Void Register(::UnityEngine::UI::IClipper* a1)
		{
			return ((::System::Void(*)(::UnityEngine::UI::IClipper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CLIPPERREGISTRY_REGISTER_OFFSET))(a1);
		}

		static ::System::Void Unregister(::UnityEngine::UI::IClipper* a1)
		{
			return ((::System::Void(*)(::UnityEngine::UI::IClipper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CLIPPERREGISTRY_UNREGISTER_OFFSET))(a1);
		}
	};
}
