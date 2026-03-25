#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/ProBuilder/BezierPoint.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_BEZIERSHAPE_GET_ISEDITING_OFFSET UNITYSDK_OFFSET(0x187BC890)
#define UNITYENGINE_PROBUILDER_BEZIERSHAPE_GET_MESH_OFFSET UNITYSDK_OFFSET(0x187BC8B0)
#define UNITYENGINE_PROBUILDER_BEZIERSHAPE_INIT_OFFSET UNITYSDK_OFFSET(0x187BC970)
#define UNITYENGINE_PROBUILDER_BEZIERSHAPE_REFRESH_OFFSET UNITYSDK_OFFSET(0x187BCA30)
#define UNITYENGINE_PROBUILDER_BEZIERSHAPE_SET_ISEDITING_OFFSET UNITYSDK_OFFSET(0x187BC8A0)
#define UNITYENGINE_PROBUILDER_BEZIERSHAPE_SET_MESH_OFFSET UNITYSDK_OFFSET(0x187BC960)
#define UNITYENGINE_PROBUILDER_BEZIERSHAPE__CTOR_OFFSET UNITYSDK_OFFSET(0x187BCE20)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int BezierShape_TypeDefinitionIndex = 34074;

	class BezierShape : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::BezierPoint>* points; // 0x18
		::System::Boolean closeLoop; // 0x20
		::System::Single radius; // 0x24
		::System::Int32 rows; // 0x28
		::System::Int32 columns; // 0x2C
		::System::Boolean smooth; // 0x30
		::System::Boolean m_IsEditing; // 0x31
		::UnityEngine::ProBuilder::ProBuilderMesh* m_Mesh; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BEZIERSHAPE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_isEditing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BEZIERSHAPE_GET_ISEDITING_OFFSET))(this);
		}

		::System::Void set_isEditing(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BEZIERSHAPE_SET_ISEDITING_OFFSET))(this, value);
		}

		::UnityEngine::ProBuilder::ProBuilderMesh* get_mesh()
		{
			return ((::UnityEngine::ProBuilder::ProBuilderMesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BEZIERSHAPE_GET_MESH_OFFSET))(this);
		}

		::System::Void set_mesh(::UnityEngine::ProBuilder::ProBuilderMesh* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BEZIERSHAPE_SET_MESH_OFFSET))(this, value);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BEZIERSHAPE_INIT_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BEZIERSHAPE_REFRESH_OFFSET))(this);
		}
	};
}
