#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define UNITYENGINE_PROBUILDER_MATERIALUTILITY_GETMATERIALCOUNT_OFFSET UNITYSDK_OFFSET(0xCFA5F70)
#define UNITYENGINE_PROBUILDER_MATERIALUTILITY_GETSHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0xCFA6060)
#define UNITYENGINE_PROBUILDER_MATERIALUTILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0xCFA6200)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int MaterialUtility_TypeDefinitionIndex = 43180;

	class MaterialUtility : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::Material*>** StaticGet_s_MaterialArray()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialUtility_TypeDefinitionIndex)->GetStaticField(0x63930);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATERIALUTILITY__CCTOR_OFFSET))();
		}

		static ::System::Int32 GetMaterialCount(::UnityEngine::Renderer* a1)
		{
			return ((::System::Int32(*)(::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATERIALUTILITY_GETMATERIALCOUNT_OFFSET))(a1);
		}

		static ::UnityEngine::Material* GetSharedMaterial(::UnityEngine::Renderer* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Material*(*)(::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MATERIALUTILITY_GETSHAREDMATERIAL_OFFSET))(a1, a2);
		}
	};
}
