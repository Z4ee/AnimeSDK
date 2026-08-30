#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/ProBuilder/PivotLocation.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::ProBuilder { class ProBuilderMesh; }
namespace UnityEngine::ProBuilder::Shapes { class Shape; }

#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_EDITIONBOUNDS_OFFSET UNITYSDK_OFFSET(0x1EBB8760)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_ISEDITABLE_OFFSET UNITYSDK_OFFSET(0x1EBB8800)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_MESH_OFFSET UNITYSDK_OFFSET(0x1EBA62D0)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_PIVOTGLOBALPOSITION_OFFSET UNITYSDK_OFFSET(0x1EBB85A0)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_PIVOTLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x1EBB8570)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_PIVOTLOCATION_OFFSET UNITYSDK_OFFSET(0x1EBB8550)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1EBB8740)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_SHAPEBOX_OFFSET UNITYSDK_OFFSET(0x1EBB87E0)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_SHAPE_OFFSET UNITYSDK_OFFSET(0x1EBB8530)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1EBB86B0)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1EBB8830)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_REBUILDPIVOT_OFFSET UNITYSDK_OFFSET(0x1EBB91B0)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_REBUILD_1_OFFSET UNITYSDK_OFFSET(0x1EBB8C00)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_REBUILD_OFFSET UNITYSDK_OFFSET(0x1EBB9010)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_RESETPIVOT_OFFSET UNITYSDK_OFFSET(0x1EBB88D0)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_ROTATEINSIDEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1EBB9550)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_SETSHAPE_OFFSET UNITYSDK_OFFSET(0x1EBA6100)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_SET_PIVOTGLOBALPOSITION_OFFSET UNITYSDK_OFFSET(0x1EBB8620)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_SET_PIVOTLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x1EBB8590)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_SET_PIVOTLOCATION_OFFSET UNITYSDK_OFFSET(0x1EBB8560)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1EBB8750)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_SET_SHAPE_OFFSET UNITYSDK_OFFSET(0x1EBB8540)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x1EBB86D0)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_UPDATEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1EBB8E90)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_UPDATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1EBB8880)
#define UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBB9640)

namespace UnityEngine::ProBuilder::Shapes
{
	inline static constexpr unsigned int ProBuilderShape_TypeDefinitionIndex = 43274;

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

		::System::Void set_shape(::UnityEngine::ProBuilder::Shapes::Shape* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Shapes::Shape*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_SET_SHAPE_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::PivotLocation get_pivotLocation()
		{
			return ((::UnityEngine::ProBuilder::PivotLocation(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_PIVOTLOCATION_OFFSET))(this);
		}

		::System::Void set_pivotLocation(::UnityEngine::ProBuilder::PivotLocation a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::PivotLocation))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_SET_PIVOTLOCATION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_pivotLocalPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_PIVOTLOCALPOSITION_OFFSET))(this);
		}

		::System::Void set_pivotLocalPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_SET_PIVOTLOCALPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_pivotGlobalPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_PIVOTGLOBALPOSITION_OFFSET))(this);
		}

		::System::Void set_pivotGlobalPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_SET_PIVOTGLOBALPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_size()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_SIZE_OFFSET))(this);
		}

		::System::Void set_size(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_SET_SIZE_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion get_rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_rotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_SET_ROTATION_OFFSET))(this, a1);
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

		::System::Void UpdateBounds(::UnityEngine::Bounds a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_UPDATEBOUNDS_OFFSET))(this, a1);
		}

		::System::Void Rebuild(::UnityEngine::Bounds a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_REBUILD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Rebuild_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_REBUILD_1_OFFSET))(this);
		}

		::System::Void SetShape(::UnityEngine::ProBuilder::Shapes::Shape* a1, ::UnityEngine::ProBuilder::PivotLocation a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Shapes::Shape*, ::UnityEngine::ProBuilder::PivotLocation))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_SETSHAPE_OFFSET))(this, a1, a2);
		}

		::System::Void RotateInsideBounds(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_ROTATEINSIDEBOUNDS_OFFSET))(this, a1);
		}

		::System::Void ResetPivot(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_RESETPIVOT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RebuildPivot(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_PROBUILDERSHAPE_REBUILDPIVOT_OFFSET))(this, a1, a2, a3);
		}
	};
}
