#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI { class IClipper; }
namespace UnityEngine::UI::Collections { template <typename T> class IndexedSet_1; }

#define UNITYENGINE_UI_CLIPPERREGISTRY_CULL_OFFSET UNITYSDK_OFFSET(0x1BBC6310)
#define UNITYENGINE_UI_CLIPPERREGISTRY_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1BBC6260)
#define UNITYENGINE_UI_CLIPPERREGISTRY_REGISTER_OFFSET UNITYSDK_OFFSET(0x1BBC6470)
#define UNITYENGINE_UI_CLIPPERREGISTRY_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x1BBC65C0)
#define UNITYENGINE_UI_CLIPPERREGISTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBC6210)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ClipperRegistry_TypeDefinitionIndex = 8344;

	class ClipperRegistry : public ::System::Object
	{
	public:
		static ::UnityEngine::UI::ClipperRegistry** StaticGet_s_Instance()
		{
			return (::UnityEngine::UI::ClipperRegistry**)Il2CppClass::FromTypeDefinitionIndex(ClipperRegistry_TypeDefinitionIndex)->GetStaticField(0x7750);
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

		static ::System::Void Register(::UnityEngine::UI::IClipper* c)
		{
			return ((::System::Void(*)(::UnityEngine::UI::IClipper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CLIPPERREGISTRY_REGISTER_OFFSET))(c);
		}

		static ::System::Void Unregister(::UnityEngine::UI::IClipper* c)
		{
			return ((::System::Void(*)(::UnityEngine::UI::IClipper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CLIPPERREGISTRY_UNREGISTER_OFFSET))(c);
		}
	};
}
