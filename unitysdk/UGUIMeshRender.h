#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/UI/CanvasUpdate.h"
#include "unitysdk/UnityEngine/UI/MaskableGraphic.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class Texture; }

#define UGUIMESHRENDER_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C6AE920)
#define UGUIMESHRENDER_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x1C6AD790)
#define UGUIMESHRENDER_GET_MESHFILTER_OFFSET UNITYSDK_OFFSET(0x1C6AE980)
#define UGUIMESHRENDER_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x1C6ADBD0)
#define UGUIMESHRENDER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1C6ADDA0)
#define UGUIMESHRENDER_ONCANVASGROUPCHANGED_OFFSET UNITYSDK_OFFSET(0x1C6AD690)
#define UGUIMESHRENDER_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x1C6AD6E0)
#define UGUIMESHRENDER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C6AD590)
#define UGUIMESHRENDER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C6AD210)
#define UGUIMESHRENDER_REBUILD_OFFSET UNITYSDK_OFFSET(0x1C6AE890)
#define UGUIMESHRENDER_SETCANVASADDITIONALCHANNELS_OFFSET UNITYSDK_OFFSET(0x1C6ACFD0)
#define UGUIMESHRENDER_SET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x1C6ADBE0)
#define UGUIMESHRENDER_START_OFFSET UNITYSDK_OFFSET(0x1C6AD1A0)
#define UGUIMESHRENDER_UPDATEMESH_OFFSET UNITYSDK_OFFSET(0x1C6ADDF0)
#define UGUIMESHRENDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6AEAB0)
#define UGUIMESHRENDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6AE990)
#define UGUIMESHRENDER___BASE_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x1C6AEB50)
#define UGUIMESHRENDER___BASE_ONCANVASGROUPCHANGED_OFFSET UNITYSDK_OFFSET(0x1C6AEBB0)
#define UGUIMESHRENDER___BASE_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x1C6AEBC0)
#define UGUIMESHRENDER___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C6AEC90)
#define UGUIMESHRENDER___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C6AECA0)
#define UGUIMESHRENDER___BASE_REBUILD_OFFSET UNITYSDK_OFFSET(0x1C6AECB0)
#define UGUIMESHRENDER___BASE_START_OFFSET UNITYSDK_OFFSET(0x1C6AECC0)

inline static constexpr unsigned int UGUIMeshRender_TypeDefinitionIndex = 64640;

class UGUIMeshRender : public ::UnityEngine::UI::MaskableGraphic
{
public:
	static ::System::Collections::Generic::List_1<::UnityEngine::Color32>** StaticGet_s_Colors()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Color32>**)Il2CppClass::FromTypeDefinitionIndex(UGUIMeshRender_TypeDefinitionIndex)->GetStaticField(0x3FB60);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>** StaticGet_s_Vertices()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(UGUIMeshRender_TypeDefinitionIndex)->GetStaticField(0x3FB68);
	}
	::UnityEngine::Texture* m_Texture; // 0xF8
	::UnityEngine::MeshFilter* m_meshFilter; // 0x100
	::System::Boolean needUV2; // 0x108
	::System::Boolean needUV3; // 0x109
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* mesh_Vertices; // 0x110
	::System::Collections::Generic::List_1<::UnityEngine::Vector2>* mesh_UVs; // 0x118
	::System::Collections::Generic::List_1<::UnityEngine::Vector2>* mesh_UV2; // 0x120
	::System::Collections::Generic::List_1<::UnityEngine::Vector2>* mesh_UV3; // 0x128
	::System::Collections::Generic::List_1<::System::Int32>* mesh_Tri; // 0x130
	::UnityEngine::Mesh* _mesh; // 0x138
	::UnityEngine::Mesh* m_mesh; // 0x140

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UGUIMESHRENDER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UGUIMESHRENDER__CCTOR_OFFSET))();
	}

	::System::Void SetCanvasAdditionalChannels()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UGUIMESHRENDER_SETCANVASADDITIONALCHANNELS_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UGUIMESHRENDER_START_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UGUIMESHRENDER_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UGUIMESHRENDER_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnCanvasGroupChanged()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UGUIMESHRENDER_ONCANVASGROUPCHANGED_OFFSET))(this);
	}

	::System::Void OnCanvasHierarchyChanged()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UGUIMESHRENDER_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
	}

	::UnityEngine::Texture* get_mainTexture()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UGUIMESHRENDER_GET_MAINTEXTURE_OFFSET))(this);
	}

	::UnityEngine::Texture* get_texture()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UGUIMESHRENDER_GET_TEXTURE_OFFSET))(this);
	}

	::System::Void set_texture(::UnityEngine::Texture* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UGUIMESHRENDER_SET_TEXTURE_OFFSET))(this, value);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UGUIMESHRENDER_LATEUPDATE_OFFSET))(this);
	}

	::System::Void Rebuild(::UnityEngine::UI::CanvasUpdate update)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::CanvasUpdate))((::PBYTE)hIl2Cpp + UGUIMESHRENDER_REBUILD_OFFSET))(this, update);
	}

	::System::Void UpdateMesh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UGUIMESHRENDER_UPDATEMESH_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UGUIMESHRENDER_CLEAR_OFFSET))(this);
	}

	::UnityEngine::MeshFilter* get_meshFilter()
	{
		return ((::UnityEngine::MeshFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + UGUIMESHRENDER_GET_MESHFILTER_OFFSET))(this);
	}

	::UnityEngine::Texture* __base_get_mainTexture()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UGUIMESHRENDER___BASE_GET_MAINTEXTURE_OFFSET))(this);
	}

	::System::Void __base_OnCanvasGroupChanged()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UGUIMESHRENDER___BASE_ONCANVASGROUPCHANGED_OFFSET))(this);
	}

	::System::Void __base_OnCanvasHierarchyChanged()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UGUIMESHRENDER___BASE_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
	}

	::System::Void __base_OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UGUIMESHRENDER___BASE_ONDISABLE_OFFSET))(this);
	}

	::System::Void __base_OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UGUIMESHRENDER___BASE_ONENABLE_OFFSET))(this);
	}

	::System::Void __base_Rebuild(::UnityEngine::UI::CanvasUpdate P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::CanvasUpdate))((::PBYTE)hIl2Cpp + UGUIMESHRENDER___BASE_REBUILD_OFFSET))(this, P0);
	}

	::System::Void __base_Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UGUIMESHRENDER___BASE_START_OFFSET))(this);
	}
};
