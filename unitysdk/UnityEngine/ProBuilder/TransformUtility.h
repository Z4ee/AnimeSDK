#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::ProBuilder { class Vertex; }

#define UNITYENGINE_PROBUILDER_TRANSFORMUTILITY_INVERSETRANSFORMVERTEX_OFFSET UNITYSDK_OFFSET(0x177A1200)
#define UNITYENGINE_PROBUILDER_TRANSFORMUTILITY_REPARENTCHILDREN_OFFSET UNITYSDK_OFFSET(0x177A0BC0)
#define UNITYENGINE_PROBUILDER_TRANSFORMUTILITY_TRANSFORMVERTEX_OFFSET UNITYSDK_OFFSET(0x177A0D80)
#define UNITYENGINE_PROBUILDER_TRANSFORMUTILITY_UNPARENTCHILDREN_OFFSET UNITYSDK_OFFSET(0x177A0A00)
#define UNITYENGINE_PROBUILDER_TRANSFORMUTILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x177A14C0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int TransformUtility_TypeDefinitionIndex = 41639;

	class TransformUtility : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::Il2CppArray<::UnityEngine::Transform*>*>** StaticGet_s_ChildStack()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::Il2CppArray<::UnityEngine::Transform*>*>**)Il2CppClass::FromTypeDefinitionIndex(TransformUtility_TypeDefinitionIndex)->GetStaticField(0x55CB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_TRANSFORMUTILITY__CCTOR_OFFSET))();
		}

		static ::System::Void UnparentChildren(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_TRANSFORMUTILITY_UNPARENTCHILDREN_OFFSET))(a1);
		}

		static ::System::Void ReparentChildren(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_TRANSFORMUTILITY_REPARENTCHILDREN_OFFSET))(a1);
		}

		static ::UnityEngine::ProBuilder::Vertex* TransformVertex(::UnityEngine::Transform* a1, ::UnityEngine::ProBuilder::Vertex* a2)
		{
			return ((::UnityEngine::ProBuilder::Vertex*(*)(::UnityEngine::Transform*, ::UnityEngine::ProBuilder::Vertex*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_TRANSFORMUTILITY_TRANSFORMVERTEX_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ProBuilder::Vertex* InverseTransformVertex(::UnityEngine::Transform* a1, ::UnityEngine::ProBuilder::Vertex* a2)
		{
			return ((::UnityEngine::ProBuilder::Vertex*(*)(::UnityEngine::Transform*, ::UnityEngine::ProBuilder::Vertex*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_TRANSFORMUTILITY_INVERSETRANSFORMVERTEX_OFFSET))(a1, a2);
		}
	};
}
