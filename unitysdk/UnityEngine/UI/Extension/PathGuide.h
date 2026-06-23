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

#define UNITYENGINE_UI_EXTENSION_PATHGUIDE_CLEARPATHPOINTS_OFFSET UNITYSDK_OFFSET(0x1DC0EF50)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE_GETMODIFIEDMATERIALPOST_OFFSET UNITYSDK_OFFSET(0x1DC10330)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1DC10150)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE_GETPATHPOINT_OFFSET UNITYSDK_OFFSET(0x1DC0EC00)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE_GET_ENDCULLDISTANCE_OFFSET UNITYSDK_OFFSET(0x1DC0F3E0)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x1DC0E2E0)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x1DC0E840)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE_GET_PATHGUIDEMESH_OFFSET UNITYSDK_OFFSET(0x1DC0EA20)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE_GET_POINTCOUNT_OFFSET UNITYSDK_OFFSET(0x1DC0E230)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE_GET_QUADSIZE_OFFSET UNITYSDK_OFFSET(0x1DC0F020)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE_GET_SPACING_OFFSET UNITYSDK_OFFSET(0x1DC0F160)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE_GET_STARTCULLDISTANCE_OFFSET UNITYSDK_OFFSET(0x1DC0F2A0)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x1DC0E700)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1DC10A60)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1DC10C50)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x1DC0F520)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE_SETPATHPOINTSDIRTY_OFFSET UNITYSDK_OFFSET(0x1DC0EB60)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE_SETPATHPOINTS_OFFSET UNITYSDK_OFFSET(0x1DC0EDC0)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE_SETPATHPOINT_OFFSET UNITYSDK_OFFSET(0x1DC0EC80)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE_SET_ENDCULLDISTANCE_OFFSET UNITYSDK_OFFSET(0x1DC0F3F0)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE_SET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x1DC0E850)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE_SET_PATHGUIDEMESH_OFFSET UNITYSDK_OFFSET(0x1DC0EA30)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE_SET_QUADSIZE_OFFSET UNITYSDK_OFFSET(0x1DC0F030)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE_SET_SPACING_OFFSET UNITYSDK_OFFSET(0x1DC0F170)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE_SET_STARTCULLDISTANCE_OFFSET UNITYSDK_OFFSET(0x1DC0F2B0)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE_SET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x1DC0E710)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC10CF0)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC0E240)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE___BASE_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1DC10DB0)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE___BASE_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x1DC10D50)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1DC10DC0)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1DC10DD0)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE___BASE_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x1DC10E70)
#define UNITYENGINE_UI_EXTENSION_PATHGUIDE___BASE_SET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x1DC10E80)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int PathGuide_TypeDefinitionIndex = 19001;

	class PathGuide : public ::UnityEngine::UI::MaskableGraphic
	{
	public:
		static ::System::Int32* StaticGet_QuadCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PathGuide_TypeDefinitionIndex)->GetStaticField(0x43E0);
		}
		static ::System::Int32* StaticGet_TransformData2Array()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PathGuide_TypeDefinitionIndex)->GetStaticField(0x43E4);
		}
		static ::System::Int32* StaticGet_TransformData1Array()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PathGuide_TypeDefinitionIndex)->GetStaticField(0x43E8);
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
