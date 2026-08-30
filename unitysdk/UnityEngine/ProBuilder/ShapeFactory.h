#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/PivotLocation.h"

namespace System { class Type; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }
namespace UnityEngine::ProBuilder::Shapes { class Shape; }

#define UNITYENGINE_PROBUILDER_SHAPEFACTORY_INSTANTIATE_1_OFFSET UNITYSDK_OFFSET(0x19221830)
#define UNITYENGINE_PROBUILDER_SHAPEFACTORY_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x192215D0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int ShapeFactory_TypeDefinitionIndex = 43238;

	class ShapeFactory : public ::System::Object
	{
	public:
		static ::UnityEngine::ProBuilder::ProBuilderMesh* Instantiate(::System::Type* a1, ::UnityEngine::ProBuilder::PivotLocation a2)
		{
			return ((::UnityEngine::ProBuilder::ProBuilderMesh*(*)(::System::Type*, ::UnityEngine::ProBuilder::PivotLocation))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPEFACTORY_INSTANTIATE_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ProBuilder::ProBuilderMesh* Instantiate_1(::UnityEngine::ProBuilder::Shapes::Shape* a1, ::UnityEngine::ProBuilder::PivotLocation a2)
		{
			return ((::UnityEngine::ProBuilder::ProBuilderMesh*(*)(::UnityEngine::ProBuilder::Shapes::Shape*, ::UnityEngine::ProBuilder::PivotLocation))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPEFACTORY_INSTANTIATE_1_OFFSET))(a1, a2);
		}
	};
}
