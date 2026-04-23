#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/Axis.h"
#include "unitysdk/UnityEngine/ProBuilder/PivotLocation.h"
#include "unitysdk/UnityEngine/ProBuilder/ShapeType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_SHAPEGENERATOR_CREATESHAPE_OFFSET UNITYSDK_OFFSET(0x1A2C8C00)
#define UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GENERATEARCH_OFFSET UNITYSDK_OFFSET(0x1A2CFF20)
#define UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GENERATECONE_OFFSET UNITYSDK_OFFSET(0x1A2CF5F0)
#define UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GENERATECUBE_OFFSET UNITYSDK_OFFSET(0x1A2C92F0)
#define UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GENERATECURVEDSTAIR_OFFSET UNITYSDK_OFFSET(0x1A2CA530)
#define UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GENERATECYLINDER_OFFSET UNITYSDK_OFFSET(0x1A2CC670)
#define UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GENERATEDOOR_OFFSET UNITYSDK_OFFSET(0x1A2CDC80)
#define UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GENERATEICOSAHEDRON_OFFSET UNITYSDK_OFFSET(0x1A2D0C50)
#define UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GENERATEPIPE_OFFSET UNITYSDK_OFFSET(0x1A2CEAD0)
#define UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GENERATEPLANE_OFFSET UNITYSDK_OFFSET(0x1A2CD3E0)
#define UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GENERATEPRISM_OFFSET UNITYSDK_OFFSET(0x1A2CBC40)
#define UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GENERATESTAIR_1_OFFSET UNITYSDK_OFFSET(0x1A2D2390)
#define UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GENERATESTAIR_OFFSET UNITYSDK_OFFSET(0x1A2C96B0)
#define UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GENERATETORUS_OFFSET UNITYSDK_OFFSET(0x1A2D1C40)
#define UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GETCIRCLEPOINTS_OFFSET UNITYSDK_OFFSET(0x1A2D30E0)
#define UNITYENGINE_PROBUILDER_SHAPEGENERATOR_SUBDIVIDEICOSAHEDRON_OFFSET UNITYSDK_OFFSET(0x1A2D2AA0)
#define UNITYENGINE_PROBUILDER_SHAPEGENERATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2D3830)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int ShapeGenerator_TypeDefinitionIndex = 39987;

	class ShapeGenerator : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_k_IcosphereVertices()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(ShapeGenerator_TypeDefinitionIndex)->GetStaticField(0x2A560);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_k_CubeTriangles()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ShapeGenerator_TypeDefinitionIndex)->GetStaticField(0x2A568);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_k_CubeVertices()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(ShapeGenerator_TypeDefinitionIndex)->GetStaticField(0x2A570);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_k_IcosphereTriangles()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ShapeGenerator_TypeDefinitionIndex)->GetStaticField(0x2A578);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPEGENERATOR__CCTOR_OFFSET))();
		}

		static ::UnityEngine::ProBuilder::ProBuilderMesh* CreateShape(::UnityEngine::ProBuilder::ShapeType shape, ::UnityEngine::ProBuilder::PivotLocation pivotType)
		{
			return ((::UnityEngine::ProBuilder::ProBuilderMesh*(*)(::UnityEngine::ProBuilder::ShapeType, ::UnityEngine::ProBuilder::PivotLocation))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPEGENERATOR_CREATESHAPE_OFFSET))(shape, pivotType);
		}

		static ::UnityEngine::ProBuilder::ProBuilderMesh* GenerateStair(::UnityEngine::ProBuilder::PivotLocation pivotType, ::UnityEngine::Vector3 size, ::System::Int32 steps, ::System::Boolean buildSides)
		{
			return ((::UnityEngine::ProBuilder::ProBuilderMesh*(*)(::UnityEngine::ProBuilder::PivotLocation, ::UnityEngine::Vector3, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GENERATESTAIR_OFFSET))(pivotType, size, steps, buildSides);
		}

		static ::UnityEngine::ProBuilder::ProBuilderMesh* GenerateCurvedStair(::UnityEngine::ProBuilder::PivotLocation pivotType, ::System::Single stairWidth, ::System::Single height, ::System::Single innerRadius, ::System::Single circumference, ::System::Int32 steps, ::System::Boolean buildSides)
		{
			return ((::UnityEngine::ProBuilder::ProBuilderMesh*(*)(::UnityEngine::ProBuilder::PivotLocation, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GENERATECURVEDSTAIR_OFFSET))(pivotType, stairWidth, height, innerRadius, circumference, steps, buildSides);
		}

		static ::UnityEngine::ProBuilder::ProBuilderMesh* GenerateStair_1(::UnityEngine::ProBuilder::PivotLocation pivotType, ::System::Int32 steps, ::System::Single width, ::System::Single height, ::System::Single depth, ::System::Boolean sidesGoToFloor, ::System::Boolean generateBack, ::System::Boolean platformsOnly)
		{
			return ((::UnityEngine::ProBuilder::ProBuilderMesh*(*)(::UnityEngine::ProBuilder::PivotLocation, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GENERATESTAIR_1_OFFSET))(pivotType, steps, width, height, depth, sidesGoToFloor, generateBack, platformsOnly);
		}

		static ::UnityEngine::ProBuilder::ProBuilderMesh* GenerateCube(::UnityEngine::ProBuilder::PivotLocation pivotType, ::UnityEngine::Vector3 size)
		{
			return ((::UnityEngine::ProBuilder::ProBuilderMesh*(*)(::UnityEngine::ProBuilder::PivotLocation, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GENERATECUBE_OFFSET))(pivotType, size);
		}

		static ::UnityEngine::ProBuilder::ProBuilderMesh* GenerateCylinder(::UnityEngine::ProBuilder::PivotLocation pivotType, ::System::Int32 axisDivisions, ::System::Single radius, ::System::Single height, ::System::Int32 heightCuts, ::System::Int32 smoothing)
		{
			return ((::UnityEngine::ProBuilder::ProBuilderMesh*(*)(::UnityEngine::ProBuilder::PivotLocation, ::System::Int32, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GENERATECYLINDER_OFFSET))(pivotType, axisDivisions, radius, height, heightCuts, smoothing);
		}

		static ::UnityEngine::ProBuilder::ProBuilderMesh* GeneratePrism(::UnityEngine::ProBuilder::PivotLocation pivotType, ::UnityEngine::Vector3 size)
		{
			return ((::UnityEngine::ProBuilder::ProBuilderMesh*(*)(::UnityEngine::ProBuilder::PivotLocation, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GENERATEPRISM_OFFSET))(pivotType, size);
		}

		static ::UnityEngine::ProBuilder::ProBuilderMesh* GenerateDoor(::UnityEngine::ProBuilder::PivotLocation pivotType, ::System::Single totalWidth, ::System::Single totalHeight, ::System::Single ledgeHeight, ::System::Single legWidth, ::System::Single depth)
		{
			return ((::UnityEngine::ProBuilder::ProBuilderMesh*(*)(::UnityEngine::ProBuilder::PivotLocation, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GENERATEDOOR_OFFSET))(pivotType, totalWidth, totalHeight, ledgeHeight, legWidth, depth);
		}

		static ::UnityEngine::ProBuilder::ProBuilderMesh* GeneratePlane(::UnityEngine::ProBuilder::PivotLocation pivotType, ::System::Single width, ::System::Single height, ::System::Int32 widthCuts, ::System::Int32 heightCuts, ::UnityEngine::ProBuilder::Axis axis)
		{
			return ((::UnityEngine::ProBuilder::ProBuilderMesh*(*)(::UnityEngine::ProBuilder::PivotLocation, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32, ::UnityEngine::ProBuilder::Axis))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GENERATEPLANE_OFFSET))(pivotType, width, height, widthCuts, heightCuts, axis);
		}

		static ::UnityEngine::ProBuilder::ProBuilderMesh* GeneratePipe(::UnityEngine::ProBuilder::PivotLocation pivotType, ::System::Single radius, ::System::Single height, ::System::Single thickness, ::System::Int32 subdivAxis, ::System::Int32 subdivHeight)
		{
			return ((::UnityEngine::ProBuilder::ProBuilderMesh*(*)(::UnityEngine::ProBuilder::PivotLocation, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GENERATEPIPE_OFFSET))(pivotType, radius, height, thickness, subdivAxis, subdivHeight);
		}

		static ::UnityEngine::ProBuilder::ProBuilderMesh* GenerateCone(::UnityEngine::ProBuilder::PivotLocation pivotType, ::System::Single radius, ::System::Single height, ::System::Int32 subdivAxis)
		{
			return ((::UnityEngine::ProBuilder::ProBuilderMesh*(*)(::UnityEngine::ProBuilder::PivotLocation, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GENERATECONE_OFFSET))(pivotType, radius, height, subdivAxis);
		}

		static ::UnityEngine::ProBuilder::ProBuilderMesh* GenerateArch(::UnityEngine::ProBuilder::PivotLocation pivotType, ::System::Single angle, ::System::Single radius, ::System::Single width, ::System::Single depth, ::System::Int32 radialCuts, ::System::Boolean insideFaces, ::System::Boolean outsideFaces, ::System::Boolean frontFaces, ::System::Boolean backFaces, ::System::Boolean endCaps)
		{
			return ((::UnityEngine::ProBuilder::ProBuilderMesh*(*)(::UnityEngine::ProBuilder::PivotLocation, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GENERATEARCH_OFFSET))(pivotType, angle, radius, width, depth, radialCuts, insideFaces, outsideFaces, frontFaces, backFaces, endCaps);
		}

		static ::UnityEngine::ProBuilder::ProBuilderMesh* GenerateIcosahedron(::UnityEngine::ProBuilder::PivotLocation pivotType, ::System::Single radius, ::System::Int32 subdivisions, ::System::Boolean weldVertices, ::System::Boolean manualUvs)
		{
			return ((::UnityEngine::ProBuilder::ProBuilderMesh*(*)(::UnityEngine::ProBuilder::PivotLocation, ::System::Single, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GENERATEICOSAHEDRON_OFFSET))(pivotType, radius, subdivisions, weldVertices, manualUvs);
		}

		static ::Il2CppArray<::UnityEngine::Vector3>* SubdivideIcosahedron(::Il2CppArray<::UnityEngine::Vector3>* vertices, ::System::Single radius)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPEGENERATOR_SUBDIVIDEICOSAHEDRON_OFFSET))(vertices, radius);
		}

		static ::Il2CppArray<::UnityEngine::Vector3>* GetCirclePoints(::System::Int32 segments, ::System::Single radius, ::System::Single circumference, ::UnityEngine::Quaternion rotation, ::System::Single offset)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::System::Int32, ::System::Single, ::System::Single, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GETCIRCLEPOINTS_OFFSET))(segments, radius, circumference, rotation, offset);
		}

		static ::UnityEngine::ProBuilder::ProBuilderMesh* GenerateTorus(::UnityEngine::ProBuilder::PivotLocation pivotType, ::System::Int32 rows, ::System::Int32 columns, ::System::Single innerRadius, ::System::Single outerRadius, ::System::Boolean smooth, ::System::Single horizontalCircumference, ::System::Single verticalCircumference, ::System::Boolean manualUvs)
		{
			return ((::UnityEngine::ProBuilder::ProBuilderMesh*(*)(::UnityEngine::ProBuilder::PivotLocation, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GENERATETORUS_OFFSET))(pivotType, rows, columns, innerRadius, outerRadius, smooth, horizontalCircumference, verticalCircumference, manualUvs);
		}
	};
}
