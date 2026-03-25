#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define UNITYENGINE_PROBUILDER_MATERIALUTILITY_GETMATERIALCOUNT_OFFSET UNITYSDK_OFFSET(0x188111A0)
#define UNITYENGINE_PROBUILDER_MATERIALUTILITY_GETSHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0x18811290)
#define UNITYENGINE_PROBUILDER_MATERIALUTILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x18811410)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int MaterialUtility_TypeDefinitionIndex = 34108;

	class MaterialUtility : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::Material*>** StaticGet_s_MaterialArray()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialUtility_TypeDefinitionIndex)->GetStaticField(0x279A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATERIALUTILITY__CCTOR_OFFSET))();
		}

		static ::System::Int32 GetMaterialCount(::UnityEngine::Renderer* renderer)
		{
			return ((::System::Int32(*)(::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATERIALUTILITY_GETMATERIALCOUNT_OFFSET))(renderer);
		}

		static ::UnityEngine::Material* GetSharedMaterial(::UnityEngine::Renderer* renderer, ::System::Int32 index)
		{
			return ((::UnityEngine::Material*(*)(::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATERIALUTILITY_GETSHAREDMATERIAL_OFFSET))(renderer, index);
		}
	};
}
