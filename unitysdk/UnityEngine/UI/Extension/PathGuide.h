#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/MaskableGraphic.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_EXTENSION_PATHGUIDE_CLEARPATHPOINTS_OFFSET UNITYSDK_OFFSET(0x1B847E70)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE_GETMODIFIEDMATERIALPOST_OFFSET UNITYSDK_OFFSET(0x1B849030)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B848E50)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE_GETPATHPOINT_OFFSET UNITYSDK_OFFSET(0x1B847C00)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE_GET_ENDCULLDISTANCE_OFFSET UNITYSDK_OFFSET(0x1B848150)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B8474B0)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x1B847990)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE_GET_PATHGUIDEMESH_OFFSET UNITYSDK_OFFSET(0x1B847AF0)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE_GET_POINTCOUNT_OFFSET UNITYSDK_OFFSET(0x1B847400)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE_GET_QUADSIZE_OFFSET UNITYSDK_OFFSET(0x1B847EE0)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE_GET_SPACING_OFFSET UNITYSDK_OFFSET(0x1B847FB0)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE_GET_STARTCULLDISTANCE_OFFSET UNITYSDK_OFFSET(0x1B848080)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x1B8478D0)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B849760)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1B849950)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x1B848220)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE_SETPATHPOINTSDIRTY_OFFSET UNITYSDK_OFFSET(0x1B847BB0)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE_SETPATHPOINTS_OFFSET UNITYSDK_OFFSET(0x1B847D50)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE_SETPATHPOINT_OFFSET UNITYSDK_OFFSET(0x1B847C80)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE_SET_ENDCULLDISTANCE_OFFSET UNITYSDK_OFFSET(0x1B848160)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE_SET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x1B8479A0)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE_SET_PATHGUIDEMESH_OFFSET UNITYSDK_OFFSET(0x1B847B00)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE_SET_QUADSIZE_OFFSET UNITYSDK_OFFSET(0x1B847EF0)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE_SET_SPACING_OFFSET UNITYSDK_OFFSET(0x1B847FC0)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE_SET_STARTCULLDISTANCE_OFFSET UNITYSDK_OFFSET(0x1B848090)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE_SET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x1B8478E0)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B8499A0)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B847410)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE___BASE_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B849A60)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE___BASE_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B849A00)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B849A70)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1B849A80)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE___BASE_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x1B849B20)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE___BASE_SET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x1B849B30)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int PathGuide_TypeDefinitionIndex = 8492;

	class PathGuide : public ::UnityEngine::UI::MaskableGraphic
	{
	public:
		static ::System::Int32* StaticGet_TransformData2Array()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PathGuide_TypeDefinitionIndex)->GetStaticField(0x3B60);
		}
		static ::System::Int32* StaticGet_QuadCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PathGuide_TypeDefinitionIndex)->GetStaticField(0x3B64);
		}
		static ::System::Int32* StaticGet_TransformData1Array()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PathGuide_TypeDefinitionIndex)->GetStaticField(0x3B68);
		}
		::UnityEngine::Texture* m_Texture; // 0xF8
		::UnityEngine::Mesh* m_PathGuideMesh; // 0x100
		::System::Single m_Size; // 0x108
		::System::Single m_Spacing; // 0x10C
		::System::Single m_CullInDistance; // 0x110
		::System::Single m_CullOutDistance; // 0x114
		::System::Int32 m_PointCount; // 0x118
		::Il2CppArray<::UnityEngine::Vector2>* m_PathPositions; // 0x120
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* m_Vertices; // 0x128
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* m_Triangles; // 0x130
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* m_UVs; // 0x138
		::Il2CppArray<::UnityEngine::Vector4>* m_TransformData1Array; // 0x140
		::Il2CppArray<::UnityEngine::Vector4>* m_TransformData2Array; // 0x148
		::UnityEngine::Material* m_ModifiedMaterial; // 0x150

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_PATHGUIDE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_PATHGUIDE__CCTOR_OFFSET))();
		}

		::System::Int32 get_PointCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_PATHGUIDE_GET_POINTCOUNT_OFFSET))(this);
		}

		::UnityEngine::Texture* get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_PATHGUIDE_GET_MAINTEXTURE_OFFSET))(this);
		}

		::UnityEngine::Texture* get_texture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_PATHGUIDE_GET_TEXTURE_OFFSET))(this);
		}

		::System::Void set_texture(::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_PATHGUIDE_SET_TEXTURE_OFFSET))(this, value);
		}

		::UnityEngine::Material* get_material()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_PATHGUIDE_GET_MATERIAL_OFFSET))(this);
		}

		::System::Void set_material(::UnityEngine::Material* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_PATHGUIDE_SET_MATERIAL_OFFSET))(this, value);
		}

		::UnityEngine::Mesh* get_PathGuideMesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_PATHGUIDE_GET_PATHGUIDEMESH_OFFSET))(this);
		}

		::System::Void set_PathGuideMesh(::UnityEngine::Mesh* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_PATHGUIDE_SET_PATHGUIDEMESH_OFFSET))(this, value);
		}

		::System::Void SetPathPointsDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_PATHGUIDE_SETPATHPOINTSDIRTY_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetPathPoint(::System::Int32 index)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_PATHGUIDE_GETPATHPOINT_OFFSET))(this, index);
		}

		::System::Void SetPathPoint(::System::Int32 index, ::UnityEngine::Vector2 point)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_PATHGUIDE_SETPATHPOINT_OFFSET))(this, index, point);
		}

		::System::Void SetPathPoints(::Il2CppArray<::UnityEngine::Vector2>* points)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_PATHGUIDE_SETPATHPOINTS_OFFSET))(this, points);
		}

		::System::Void ClearPathPoints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_PATHGUIDE_CLEARPATHPOINTS_OFFSET))(this);
		}

		::System::Single get_QuadSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_PATHGUIDE_GET_QUADSIZE_OFFSET))(this);
		}

		::System::Void set_QuadSize(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_PATHGUIDE_SET_QUADSIZE_OFFSET))(this, value);
		}

		::System::Single get_Spacing()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_PATHGUIDE_GET_SPACING_OFFSET))(this);
		}

		::System::Void set_Spacing(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_PATHGUIDE_SET_SPACING_OFFSET))(this, value);
		}

		::System::Single get_StartCullDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_PATHGUIDE_GET_STARTCULLDISTANCE_OFFSET))(this);
		}

		::System::Void set_StartCullDistance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_PATHGUIDE_SET_STARTCULLDISTANCE_OFFSET))(this, value);
		}

		::System::Single get_EndCullDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_PATHGUIDE_GET_ENDCULLDISTANCE_OFFSET))(this);
		}

		::System::Void set_EndCullDistance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_PATHGUIDE_SET_ENDCULLDISTANCE_OFFSET))(this, value);
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_PATHGUIDE_ONPOPULATEMESH_OFFSET))(this, vh);
		}

		::UnityEngine::Material* GetModifiedMaterial(::UnityEngine::Material* baseMaterial)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_PATHGUIDE_GETMODIFIEDMATERIAL_OFFSET))(this, baseMaterial);
		}

		::UnityEngine::Material* GetModifiedMaterialPost(::UnityEngine::Material* baseMaterial)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_PATHGUIDE_GETMODIFIEDMATERIALPOST_OFFSET))(this, baseMaterial);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_PATHGUIDE_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_PATHGUIDE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::UnityEngine::Texture* __base_get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_PATHGUIDE___BASE_GET_MAINTEXTURE_OFFSET))(this);
		}

		::UnityEngine::Material* __base_GetModifiedMaterial(::UnityEngine::Material* P0)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_PATHGUIDE___BASE_GETMODIFIEDMATERIAL_OFFSET))(this, P0);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_PATHGUIDE___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_PATHGUIDE___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void __base_OnPopulateMesh(::UnityEngine::UI::VertexHelper* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_PATHGUIDE___BASE_ONPOPULATEMESH_OFFSET))(this, P0);
		}

		::System::Void __base_set_material(::UnityEngine::Material* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_PATHGUIDE___BASE_SET_MATERIAL_OFFSET))(this, P0);
		}
	};
}
