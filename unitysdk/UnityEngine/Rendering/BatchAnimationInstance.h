#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Renderer.h"
#include "unitysdk/UnityEngine/Rendering/BAParamRef.h"
#include "unitysdk/UnityEngine/Rendering/BAVariantKey.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class BatchAnimation; }

#define UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_GETBONEPOSROT_OFFSET UNITYSDK_OFFSET(0x1EAC5CD0)
#define UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_GETBYPTR_OFFSET UNITYSDK_OFFSET(0x1EAC5830)
#define UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_GETLOD_OFFSET UNITYSDK_OFFSET(0x1EAC5CE0)
#define UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_GET_BATCHANIMATION_OFFSET UNITYSDK_OFFSET(0x1EAC5C90)
#define UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_SETBONEATTACH_OFFSET UNITYSDK_OFFSET(0x1EAC5CC0)
#define UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_SETCUSTOMMATINDEX_OFFSET UNITYSDK_OFFSET(0x1EAC5D40)
#define UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_SETGRAPHPARAMBOOL_OFFSET UNITYSDK_OFFSET(0x1EAC5CB0)
#define UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_SETMATKEYWORD_OFFSET UNITYSDK_OFFSET(0x1EAC5D50)
#define UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_SETOVERRIDEFRAME_OFFSET UNITYSDK_OFFSET(0x1EAC5CA0)
#define UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_SETPARTMAT_OFFSET UNITYSDK_OFFSET(0x1EAC5D30)
#define UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_SETPARTVARIANTEX_OFFSET UNITYSDK_OFFSET(0x1EAC5D10)
#define UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_SETPARTVARIANT_1_OFFSET UNITYSDK_OFFSET(0x1EAC5D20)
#define UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_SETPARTVARIANT_OFFSET UNITYSDK_OFFSET(0x1EAC5D00)
#define UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_SET_CUSTOMMATINDEX_OFFSET UNITYSDK_OFFSET(0x1EAC5D60)
#define UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_UPDATELOD_OFFSET UNITYSDK_OFFSET(0x1EAC5CF0)
#define UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EAC5D70)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BatchAnimationInstance_TypeDefinitionIndex = 4781;

	class BatchAnimationInstance : public ::UnityEngine::Renderer
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::Rendering::BatchAnimationInstance* GetByPtr(::System::IntPtr a1)
		{
			return ((::UnityEngine::Rendering::BatchAnimationInstance*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_GETBYPTR_OFFSET))(a1);
		}

		::UnityEngine::Rendering::BatchAnimation* get_batchAnimation()
		{
			return ((::UnityEngine::Rendering::BatchAnimation*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_GET_BATCHANIMATION_OFFSET))(this);
		}

		::System::Void SetOverrideFrame(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_SETOVERRIDEFRAME_OFFSET))(this, a1);
		}

		::System::Void SetGraphParamBool(::UnityEngine::Rendering::BAParamRef& a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BAParamRef&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_SETGRAPHPARAMBOOL_OFFSET))(this, a1, a2);
		}

		::System::Int32 SetBoneAttach(::UnityEngine::Transform* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_SETBONEATTACH_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean GetBonePosRot(::System::Int32 a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_GETBONEPOSROT_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetLod()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_GETLOD_OFFSET))(this);
		}

		::System::Int32 UpdateLod()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_UPDATELOD_OFFSET))(this);
		}

		::System::Boolean SetPartVariant(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_SETPARTVARIANT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetPartVariantEx(::System::Int32 a1, ::System::Int32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_SETPARTVARIANTEX_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetPartVariant_1(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Rendering::BAVariantKey a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::BAVariantKey))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_SETPARTVARIANT_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetPartMat(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Material* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_SETPARTMAT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetCustomMatIndex(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_SETCUSTOMMATINDEX_OFFSET))(this, a1, a2);
		}

		::System::Void SetMatKeyword(::System::String* a1, ::System::Boolean a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_SETMATKEYWORD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void set_customMatIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_SET_CUSTOMMATINDEX_OFFSET))(this, a1);
		}
	};
}
