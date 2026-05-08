#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ShaderCollectionType.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/ShaderVariantCollection_ShaderVariant.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Shader; }

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPSHADERVARIANTCOLLECTION_ADDSHADERVARIANT_OFFSET UNITYSDK_OFFSET(0x1A6F44F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPSHADERVARIANTCOLLECTION_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1A6F43F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPSHADERVARIANTCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6F4650)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapShaderVariantCollection_TypeDefinitionIndex = 30102;

	class NapShaderVariantCollection : public ::UnityEngine::ScriptableObject
	{
	public:
		// static const ::System::String* total; // 0x0
		// static const ::System::String* cfgPath; // 0x0
		// static const ::System::String* ui; // 0x0
		// static const ::System::String* character; // 0x0
		// static const ::System::String* scene; // 0x0
		// static const ::System::String* effect; // 0x0
		::System::Collections::Generic::List_1<::UnityEngine::Shader*>* m_ShaderCollections_UI; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Shader*>* m_ShaderCollections_Character; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Shader*>* m_ShaderCollections_Scene; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Shader*>* m_ShaderCollections_Effect; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPSHADERVARIANTCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPSHADERVARIANTCOLLECTION_CLEANUP_OFFSET))(this);
		}

		::System::Void AddShaderVariant(::UnityEngine::ShaderVariantCollection_ShaderVariant& variant, ::UnityEngine::Rendering::Universal::ShaderCollectionType type)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ShaderVariantCollection_ShaderVariant&, ::UnityEngine::Rendering::Universal::ShaderCollectionType))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPSHADERVARIANTCOLLECTION_ADDSHADERVARIANT_OFFSET))(this, variant, type);
		}
	};
}
