#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/ProBuilder/PivotLocation.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::ProBuilder { class ProBuilderMesh; }
namespace UnityEngine::ProBuilder::Shapes { class Shape; }

#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_EDITIONBOUNDS_OFFSET UNITYSDK_OFFSET(0x1A2DB9E0)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_ISEDITABLE_OFFSET UNITYSDK_OFFSET(0x1A2DBA80)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_MESH_OFFSET UNITYSDK_OFFSET(0x1A2C8B10)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_PIVOTGLOBALPOSITION_OFFSET UNITYSDK_OFFSET(0x1A2DB820)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_PIVOTLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x1A2DB7F0)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_PIVOTLOCATION_OFFSET UNITYSDK_OFFSET(0x1A2DB7D0)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1A2DB9C0)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_SHAPEBOX_OFFSET UNITYSDK_OFFSET(0x1A2DBA60)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_SHAPE_OFFSET UNITYSDK_OFFSET(0x1A2DB7B0)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1A2DB930)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1A2DBAB0)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_REBUILDPIVOT_OFFSET UNITYSDK_OFFSET(0x1A2DC2E0)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_REBUILD_1_OFFSET UNITYSDK_OFFSET(0x1A2DBDD0)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_REBUILD_OFFSET UNITYSDK_OFFSET(0x1A2DC140)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_RESETPIVOT_OFFSET UNITYSDK_OFFSET(0x1A2DBB50)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_ROTATEINSIDEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1A2DC5C0)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_SETSHAPE_OFFSET UNITYSDK_OFFSET(0x1A2C8950)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_SET_PIVOTGLOBALPOSITION_OFFSET UNITYSDK_OFFSET(0x1A2DB8A0)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_SET_PIVOTLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x1A2DB810)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_SET_PIVOTLOCATION_OFFSET UNITYSDK_OFFSET(0x1A2DB7E0)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1A2DB9D0)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_SET_SHAPE_OFFSET UNITYSDK_OFFSET(0x1A2DB7C0)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x1A2DB950)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_UPDATEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1A2DBFC0)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_UPDATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A2DBB00)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2DC6B0)

namespace UnityEngine::ProBuilder::Shapes
{
	inline static constexpr unsigned int ProBuilderShape_TypeDefinitionIndex = 40021;

	class ProBuilderShape : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::ProBuilder::Shapes::Shape* m_Shape; // 0x18
		::UnityEngine::Vector3 m_Size; // 0x20
		::UnityEngine::Quaternion m_Rotation; // 0x2C
		::UnityEngine::ProBuilder::ProBuilderMesh* m_Mesh; // 0x40
		::UnityEngine::ProBuilder::PivotLocation m_PivotLocation; // 0x48
		::UnityEngine::Vector3 m_PivotPosition; // 0x4C
		::System::UInt16 m_UnmodifiedMeshVersion; // 0x58
		::UnityEngine::Bounds m_EditionBounds; // 0x5C
		::UnityEngine::Bounds m_ShapeBox; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE__CTOR_OFFSET))(this);
		}

		::UnityEngine::ProBuilder::Shapes::Shape* get_shape()
		{
			return ((::UnityEngine::ProBuilder::Shapes::Shape*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_SHAPE_OFFSET))(this);
		}

		::System::Void set_shape(::UnityEngine::ProBuilder::Shapes::Shape* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Shapes::Shape*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_SET_SHAPE_OFFSET))(this, value);
		}

		::UnityEngine::ProBuilder::PivotLocation get_pivotLocation()
		{
			return ((::UnityEngine::ProBuilder::PivotLocation(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_PIVOTLOCATION_OFFSET))(this);
		}

		::System::Void set_pivotLocation(::UnityEngine::ProBuilder::PivotLocation value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::PivotLocation))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_SET_PIVOTLOCATION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_pivotLocalPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_PIVOTLOCALPOSITION_OFFSET))(this);
		}

		::System::Void set_pivotLocalPosition(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_SET_PIVOTLOCALPOSITION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_pivotGlobalPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_PIVOTGLOBALPOSITION_OFFSET))(this);
		}

		::System::Void set_pivotGlobalPosition(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_SET_PIVOTGLOBALPOSITION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_size()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_SIZE_OFFSET))(this);
		}

		::System::Void set_size(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_SET_SIZE_OFFSET))(this, value);
		}

		::UnityEngine::Quaternion get_rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_rotation(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_SET_ROTATION_OFFSET))(this, value);
		}

		::UnityEngine::Bounds get_editionBounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_EDITIONBOUNDS_OFFSET))(this);
		}

		::UnityEngine::Bounds get_shapeBox()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_SHAPEBOX_OFFSET))(this);
		}

		::System::Boolean get_isEditable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_ISEDITABLE_OFFSET))(this);
		}

		::UnityEngine::ProBuilder::ProBuilderMesh* get_mesh()
		{
			return ((::UnityEngine::ProBuilder::ProBuilderMesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_MESH_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_ONVALIDATE_OFFSET))(this);
		}

		::System::Void UpdateComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_UPDATECOMPONENT_OFFSET))(this);
		}

		::System::Void UpdateBounds(::UnityEngine::Bounds bounds)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_UPDATEBOUNDS_OFFSET))(this, bounds);
		}

		::System::Void Rebuild(::UnityEngine::Bounds bounds, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 cornerPivot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_REBUILD_OFFSET))(this, bounds, rotation, cornerPivot);
		}

		::System::Void Rebuild_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_REBUILD_1_OFFSET))(this);
		}

		::System::Void SetShape(::UnityEngine::ProBuilder::Shapes::Shape* shape, ::UnityEngine::ProBuilder::PivotLocation location)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Shapes::Shape*, ::UnityEngine::ProBuilder::PivotLocation))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_SETSHAPE_OFFSET))(this, shape, location);
		}

		::System::Void RotateInsideBounds(::UnityEngine::Quaternion deltaRotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_ROTATEINSIDEBOUNDS_OFFSET))(this, deltaRotation);
		}

		::System::Void ResetPivot(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_RESETPIVOT_OFFSET))(this, mesh, size, rotation);
		}

		::System::Void RebuildPivot(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_REBUILDPIVOT_OFFSET))(this, mesh, size, rotation);
		}
	};
}
