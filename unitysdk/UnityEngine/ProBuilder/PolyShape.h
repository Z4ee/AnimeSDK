#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/ProBuilder/PolyShape_PolyEditMode.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_POLYSHAPE_GET_CONTROLPOINTS_OFFSET UNITYSDK_OFFSET(0xD0084D0)
#define UNITYENGINE_PROBUILDER_POLYSHAPE_GET_EXTRUDE_OFFSET UNITYSDK_OFFSET(0xD0085B0)
#define UNITYENGINE_PROBUILDER_POLYSHAPE_GET_FLIPNORMALS_OFFSET UNITYSDK_OFFSET(0xD0085F0)
#define UNITYENGINE_PROBUILDER_POLYSHAPE_GET_MESH_OFFSET UNITYSDK_OFFSET(0xCFB4C90)
#define UNITYENGINE_PROBUILDER_POLYSHAPE_GET_POLYEDITMODE_OFFSET UNITYSDK_OFFSET(0xD0085D0)
#define UNITYENGINE_PROBUILDER_POLYSHAPE_ISSNAPENABLED_OFFSET UNITYSDK_OFFSET(0xD008620)
#define UNITYENGINE_PROBUILDER_POLYSHAPE_SETCONTROLPOINTS_OFFSET UNITYSDK_OFFSET(0xD008530)
#define UNITYENGINE_PROBUILDER_POLYSHAPE_SET_EXTRUDE_OFFSET UNITYSDK_OFFSET(0xD0085C0)
#define UNITYENGINE_PROBUILDER_POLYSHAPE_SET_FLIPNORMALS_OFFSET UNITYSDK_OFFSET(0xD008600)
#define UNITYENGINE_PROBUILDER_POLYSHAPE_SET_MESH_OFFSET UNITYSDK_OFFSET(0xD008610)
#define UNITYENGINE_PROBUILDER_POLYSHAPE_SET_POLYEDITMODE_OFFSET UNITYSDK_OFFSET(0xD0085E0)
#define UNITYENGINE_PROBUILDER_POLYSHAPE__CTOR_OFFSET UNITYSDK_OFFSET(0xD008630)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int PolyShape_TypeDefinitionIndex = 43191;

	class PolyShape : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::ProBuilder::ProBuilderMesh* m_Mesh; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* m_Points; // 0x20
		::System::Single m_Extrude; // 0x28
		::UnityEngine::ProBuilder::PolyShape_PolyEditMode m_EditMode; // 0x2C
		::System::Boolean m_FlipNormals; // 0x30
		::System::Boolean isOnGrid; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLYSHAPE__CTOR_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Vector3>* get_controlPoints()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLYSHAPE_GET_CONTROLPOINTS_OFFSET))(this);
		}

		::System::Void SetControlPoints(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLYSHAPE_SETCONTROLPOINTS_OFFSET))(this, a1);
		}

		::System::Single get_extrude()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLYSHAPE_GET_EXTRUDE_OFFSET))(this);
		}

		::System::Void set_extrude(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLYSHAPE_SET_EXTRUDE_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::PolyShape_PolyEditMode get_polyEditMode()
		{
			return ((::UnityEngine::ProBuilder::PolyShape_PolyEditMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLYSHAPE_GET_POLYEDITMODE_OFFSET))(this);
		}

		::System::Void set_polyEditMode(::UnityEngine::ProBuilder::PolyShape_PolyEditMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::PolyShape_PolyEditMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLYSHAPE_SET_POLYEDITMODE_OFFSET))(this, a1);
		}

		::System::Boolean get_flipNormals()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLYSHAPE_GET_FLIPNORMALS_OFFSET))(this);
		}

		::System::Void set_flipNormals(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLYSHAPE_SET_FLIPNORMALS_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::ProBuilderMesh* get_mesh()
		{
			return ((::UnityEngine::ProBuilder::ProBuilderMesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLYSHAPE_GET_MESH_OFFSET))(this);
		}

		::System::Void set_mesh(::UnityEngine::ProBuilder::ProBuilderMesh* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLYSHAPE_SET_MESH_OFFSET))(this, a1);
		}

		::System::Boolean IsSnapEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLYSHAPE_ISSNAPENABLED_OFFSET))(this);
		}
	};
}
