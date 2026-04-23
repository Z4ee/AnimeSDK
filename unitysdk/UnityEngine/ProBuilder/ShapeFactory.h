#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/PivotLocation.h"

namespace System { class Type; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }
namespace UnityEngine::ProBuilder::Shapes { class Shape; }

#define UNITYENGINE_PROBUILDER_SHAPEFACTORY_INSTANTIATE_1_OFFSET UNITYSDK_OFFSET(0x1A2C86D0)
#define UNITYENGINE_PROBUILDER_SHAPEFACTORY_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x1A2C84E0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int ShapeFactory_TypeDefinitionIndex = 39985;

	class ShapeFactory : public ::System::Object
	{
	public:
		static ::UnityEngine::ProBuilder::ProBuilderMesh* Instantiate(::System::Type* shapeType, ::UnityEngine::ProBuilder::PivotLocation pivotType)
		{
			return ((::UnityEngine::ProBuilder::ProBuilderMesh*(*)(::System::Type*, ::UnityEngine::ProBuilder::PivotLocation))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPEFACTORY_INSTANTIATE_OFFSET))(shapeType, pivotType);
		}

		static ::UnityEngine::ProBuilder::ProBuilderMesh* Instantiate_1(::UnityEngine::ProBuilder::Shapes::Shape* shape, ::UnityEngine::ProBuilder::PivotLocation pivotType)
		{
			return ((::UnityEngine::ProBuilder::ProBuilderMesh*(*)(::UnityEngine::ProBuilder::Shapes::Shape*, ::UnityEngine::ProBuilder::PivotLocation))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPEFACTORY_INSTANTIATE_1_OFFSET))(shape, pivotType);
		}
	};
}
