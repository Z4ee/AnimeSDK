#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::ProBuilder { class Vertex; }

#define UNITYENGINE_PROBUILDER_TRANSFORMUTILITY_INVERSETRANSFORMVERTEX_OFFSET UNITYSDK_OFFSET(0x1A2E9800)
#define UNITYENGINE_PROBUILDER_TRANSFORMUTILITY_REPARENTCHILDREN_OFFSET UNITYSDK_OFFSET(0x1A2E91B0)
#define UNITYENGINE_PROBUILDER_TRANSFORMUTILITY_TRANSFORMVERTEX_OFFSET UNITYSDK_OFFSET(0x1A2E9380)
#define UNITYENGINE_PROBUILDER_TRANSFORMUTILITY_UNPARENTCHILDREN_OFFSET UNITYSDK_OFFSET(0x1A2E8FC0)
#define UNITYENGINE_PROBUILDER_TRANSFORMUTILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2E9AC0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int TransformUtility_TypeDefinitionIndex = 39997;

	class TransformUtility : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::Il2CppArray<::UnityEngine::Transform*>*>** StaticGet_s_ChildStack()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::Il2CppArray<::UnityEngine::Transform*>*>**)Il2CppClass::FromTypeDefinitionIndex(TransformUtility_TypeDefinitionIndex)->GetStaticField(0x2E620);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_TRANSFORMUTILITY__CCTOR_OFFSET))();
		}

		static ::System::Void UnparentChildren(::UnityEngine::Transform* t)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_TRANSFORMUTILITY_UNPARENTCHILDREN_OFFSET))(t);
		}

		static ::System::Void ReparentChildren(::UnityEngine::Transform* t)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_TRANSFORMUTILITY_REPARENTCHILDREN_OFFSET))(t);
		}

		static ::UnityEngine::ProBuilder::Vertex* TransformVertex(::UnityEngine::Transform* transform, ::UnityEngine::ProBuilder::Vertex* vertex)
		{
			return ((::UnityEngine::ProBuilder::Vertex*(*)(::UnityEngine::Transform*, ::UnityEngine::ProBuilder::Vertex*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_TRANSFORMUTILITY_TRANSFORMVERTEX_OFFSET))(transform, vertex);
		}

		static ::UnityEngine::ProBuilder::Vertex* InverseTransformVertex(::UnityEngine::Transform* transform, ::UnityEngine::ProBuilder::Vertex* vertex)
		{
			return ((::UnityEngine::ProBuilder::Vertex*(*)(::UnityEngine::Transform*, ::UnityEngine::ProBuilder::Vertex*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_TRANSFORMUTILITY_INVERSETRANSFORMVERTEX_OFFSET))(transform, vertex);
		}
	};
}
