#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/Axis.h"
#include "unitysdk/UnityEngine/ProBuilder/PivotLocation.h"
#include "unitysdk/UnityEngine/ProBuilder/ShapeType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_SHAPEGENERATOR_CREATESHAPE_OFFSET UNITYSDK_OFFSET(0x1B12A6B0)
#define UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GENERATEARCH_OFFSET UNITYSDK_OFFSET(0x1B1314B0)
#define UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GENERATECONE_OFFSET UNITYSDK_OFFSET(0x1B130920)
#define UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GENERATECUBE_OFFSET UNITYSDK_OFFSET(0x1B12ADA0)
#define UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GENERATECURVEDSTAIR_OFFSET UNITYSDK_OFFSET(0x1B12BC00)
#define UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GENERATECYLINDER_OFFSET UNITYSDK_OFFSET(0x1B12D590)
#define UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GENERATEDOOR_OFFSET UNITYSDK_OFFSET(0x1B12E7E0)
#define UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GENERATEICOSAHEDRON_OFFSET UNITYSDK_OFFSET(0x1B131EC0)
#define UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GENERATEPIPE_OFFSET UNITYSDK_OFFSET(0x1B12FEB0)
#define UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GENERATEPLANE_OFFSET UNITYSDK_OFFSET(0x1B12E090)
#define UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GENERATEPRISM_OFFSET UNITYSDK_OFFSET(0x1B12CE40)
#define UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GENERATESTAIR_1_OFFSET UNITYSDK_OFFSET(0x1B1333C0)
#define UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GENERATESTAIR_OFFSET UNITYSDK_OFFSET(0x1B12B120)
#define UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GENERATETORUS_OFFSET UNITYSDK_OFFSET(0x1B132C90)
#define UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GETCIRCLEPOINTS_OFFSET UNITYSDK_OFFSET(0x1B134050)
#define UNITYENGINE_PROBUILDER_SHAPEGENERATOR_SUBDIVIDEICOSAHEDRON_OFFSET UNITYSDK_OFFSET(0x1B133AF0)
#define UNITYENGINE_PROBUILDER_SHAPEGENERATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B134740)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int ShapeGenerator_TypeDefinitionIndex = 40814;

	class ShapeGenerator : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_k_CubeVertices()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(ShapeGenerator_TypeDefinitionIndex)->GetStaticField(0x56220);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_k_IcosphereVertices()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(ShapeGenerator_TypeDefinitionIndex)->GetStaticField(0x56228);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_k_CubeTriangles()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ShapeGenerator_TypeDefinitionIndex)->GetStaticField(0x56230);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_k_IcosphereTriangles()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ShapeGenerator_TypeDefinitionIndex)->GetStaticField(0x56238);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPEGENERATOR__CCTOR_OFFSET))();
		}

		static ::UnityEngine::ProBuilder::ProBuilderMesh* CreateShape(::UnityEngine::ProBuilder::ShapeType a1, ::UnityEngine::ProBuilder::PivotLocation a2)
		{
			return ((::UnityEngine::ProBuilder::ProBuilderMesh*(*)(::UnityEngine::ProBuilder::ShapeType, ::UnityEngine::ProBuilder::PivotLocation))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPEGENERATOR_CREATESHAPE_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ProBuilder::ProBuilderMesh* GenerateStair(::UnityEngine::ProBuilder::PivotLocation a1, ::UnityEngine::Vector3 a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::UnityEngine::ProBuilder::ProBuilderMesh*(*)(::UnityEngine::ProBuilder::PivotLocation, ::UnityEngine::Vector3, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GENERATESTAIR_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::ProBuilder::ProBuilderMesh* GenerateCurvedStair(::UnityEngine::ProBuilder::PivotLocation a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Int32 a6, ::System::Boolean a7)
		{
			return ((::UnityEngine::ProBuilder::ProBuilderMesh*(*)(::UnityEngine::ProBuilder::PivotLocation, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GENERATECURVEDSTAIR_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::UnityEngine::ProBuilder::ProBuilderMesh* GenerateStair_1(::UnityEngine::ProBuilder::PivotLocation a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Boolean a8)
		{
			return ((::UnityEngine::ProBuilder::ProBuilderMesh*(*)(::UnityEngine::ProBuilder::PivotLocation, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GENERATESTAIR_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::UnityEngine::ProBuilder::ProBuilderMesh* GenerateCube(::UnityEngine::ProBuilder::PivotLocation a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::ProBuilder::ProBuilderMesh*(*)(::UnityEngine::ProBuilder::PivotLocation, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GENERATECUBE_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ProBuilder::ProBuilderMesh* GenerateCylinder(::UnityEngine::ProBuilder::PivotLocation a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::UnityEngine::ProBuilder::ProBuilderMesh*(*)(::UnityEngine::ProBuilder::PivotLocation, ::System::Int32, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GENERATECYLINDER_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::UnityEngine::ProBuilder::ProBuilderMesh* GeneratePrism(::UnityEngine::ProBuilder::PivotLocation a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::ProBuilder::ProBuilderMesh*(*)(::UnityEngine::ProBuilder::PivotLocation, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GENERATEPRISM_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ProBuilder::ProBuilderMesh* GenerateDoor(::UnityEngine::ProBuilder::PivotLocation a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::UnityEngine::ProBuilder::ProBuilderMesh*(*)(::UnityEngine::ProBuilder::PivotLocation, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GENERATEDOOR_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::UnityEngine::ProBuilder::ProBuilderMesh* GeneratePlane(::UnityEngine::ProBuilder::PivotLocation a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4, ::System::Int32 a5, ::UnityEngine::ProBuilder::Axis a6)
		{
			return ((::UnityEngine::ProBuilder::ProBuilderMesh*(*)(::UnityEngine::ProBuilder::PivotLocation, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32, ::UnityEngine::ProBuilder::Axis))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GENERATEPLANE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::UnityEngine::ProBuilder::ProBuilderMesh* GeneratePipe(::UnityEngine::ProBuilder::PivotLocation a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::UnityEngine::ProBuilder::ProBuilderMesh*(*)(::UnityEngine::ProBuilder::PivotLocation, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GENERATEPIPE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::UnityEngine::ProBuilder::ProBuilderMesh* GenerateCone(::UnityEngine::ProBuilder::PivotLocation a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4)
		{
			return ((::UnityEngine::ProBuilder::ProBuilderMesh*(*)(::UnityEngine::ProBuilder::PivotLocation, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GENERATECONE_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::ProBuilder::ProBuilderMesh* GenerateArch(::UnityEngine::ProBuilder::PivotLocation a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Int32 a6, ::System::Boolean a7, ::System::Boolean a8, ::System::Boolean a9, ::System::Boolean a10, ::System::Boolean a11)
		{
			return ((::UnityEngine::ProBuilder::ProBuilderMesh*(*)(::UnityEngine::ProBuilder::PivotLocation, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GENERATEARCH_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		static ::UnityEngine::ProBuilder::ProBuilderMesh* GenerateIcosahedron(::UnityEngine::ProBuilder::PivotLocation a1, ::System::Single a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::UnityEngine::ProBuilder::ProBuilderMesh*(*)(::UnityEngine::ProBuilder::PivotLocation, ::System::Single, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GENERATEICOSAHEDRON_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::Il2CppArray<::UnityEngine::Vector3>* SubdivideIcosahedron(::Il2CppArray<::UnityEngine::Vector3>* a1, ::System::Single a2)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPEGENERATOR_SUBDIVIDEICOSAHEDRON_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::UnityEngine::Vector3>* GetCirclePoints(::System::Int32 a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::Quaternion a4, ::System::Single a5)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::System::Int32, ::System::Single, ::System::Single, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GETCIRCLEPOINTS_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::ProBuilder::ProBuilderMesh* GenerateTorus(::UnityEngine::ProBuilder::PivotLocation a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Single a4, ::System::Single a5, ::System::Boolean a6, ::System::Single a7, ::System::Single a8, ::System::Boolean a9)
		{
			return ((::UnityEngine::ProBuilder::ProBuilderMesh*(*)(::UnityEngine::ProBuilder::PivotLocation, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPEGENERATOR_GENERATETORUS_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
	};
}
