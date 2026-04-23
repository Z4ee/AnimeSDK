#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Renderer.h"
#include "unitysdk/UnityEngine/Rendering/BAParamRef.h"
#include "unitysdk/UnityEngine/Rendering/BAVariantKey.h"

namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class BatchAnimation; }

#define UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_GETBYPTR_OFFSET UNITYSDK_OFFSET(0x1A474D80)
#define UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_GETLOD_OFFSET UNITYSDK_OFFSET(0x1A4756F0)
#define UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_GET_BATCHANIMATION_OFFSET UNITYSDK_OFFSET(0x1A4756A0)
#define UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_PLAY_OFFSET UNITYSDK_OFFSET(0x1A4756C0)
#define UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_SETBONEATTACH_OFFSET UNITYSDK_OFFSET(0x1A4756E0)
#define UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_SETCUSTOMMATINDEX_OFFSET UNITYSDK_OFFSET(0x1A475750)
#define UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_SETGRAPHPARAMBOOL_OFFSET UNITYSDK_OFFSET(0x1A4756D0)
#define UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_SETMATKEYWORD_OFFSET UNITYSDK_OFFSET(0x1A475760)
#define UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_SETOVERRIDEFRAME_OFFSET UNITYSDK_OFFSET(0x1A4756B0)
#define UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_SETPARTMAT_OFFSET UNITYSDK_OFFSET(0x1A475740)
#define UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_SETPARTVARIANTEX_OFFSET UNITYSDK_OFFSET(0x1A475720)
#define UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_SETPARTVARIANT_1_OFFSET UNITYSDK_OFFSET(0x1A475730)
#define UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_SETPARTVARIANT_OFFSET UNITYSDK_OFFSET(0x1A475710)
#define UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_SET_CUSTOMMATINDEX_OFFSET UNITYSDK_OFFSET(0x1A475770)
#define UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_UPDATELOD_OFFSET UNITYSDK_OFFSET(0x1A475700)
#define UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A475780)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BatchAnimationInstance_TypeDefinitionIndex = 4592;

	class BatchAnimationInstance : public ::UnityEngine::Renderer
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::Rendering::BatchAnimationInstance* GetByPtr(::System::IntPtr instancePtr)
		{
			return ((::UnityEngine::Rendering::BatchAnimationInstance*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_GETBYPTR_OFFSET))(instancePtr);
		}

		::UnityEngine::Rendering::BatchAnimation* get_batchAnimation()
		{
			return ((::UnityEngine::Rendering::BatchAnimation*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_GET_BATCHANIMATION_OFFSET))(this);
		}

		::System::Void SetOverrideFrame(::System::Int32 frameCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_SETOVERRIDEFRAME_OFFSET))(this, frameCount);
		}

		::System::Void Play(::System::Int32 groupIndex, ::System::Int32 palyState, ::System::Int32 delay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_PLAY_OFFSET))(this, groupIndex, palyState, delay);
		}

		::System::Void SetGraphParamBool(::UnityEngine::Rendering::BAParamRef& param, ::System::Boolean v)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BAParamRef&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_SETGRAPHPARAMBOOL_OFFSET))(this, param, v);
		}

		::System::Int32 SetBoneAttach(::UnityEngine::Transform* trans, ::System::Int32 boneIndex, ::System::Boolean attach)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_SETBONEATTACH_OFFSET))(this, trans, boneIndex, attach);
		}

		::System::Int32 GetLod()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_GETLOD_OFFSET))(this);
		}

		::System::Int32 UpdateLod()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_UPDATELOD_OFFSET))(this);
		}

		::System::Boolean SetPartVariant(::System::Int32 lod, ::System::Int32 part, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_SETPARTVARIANT_OFFSET))(this, lod, part, index);
		}

		::System::Void SetPartVariantEx(::System::Int32 lod, ::System::Int32 part, ::System::UInt32 key)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_SETPARTVARIANTEX_OFFSET))(this, lod, part, key);
		}

		::System::Void SetPartVariant_1(::System::Int32 lod, ::System::Int32 part, ::UnityEngine::Rendering::BAVariantKey key)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::BAVariantKey))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_SETPARTVARIANT_1_OFFSET))(this, lod, part, key);
		}

		::System::Void SetPartMat(::System::Int32 lod, ::System::Int32 part, ::UnityEngine::Material* overrideMat)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_SETPARTMAT_OFFSET))(this, lod, part, overrideMat);
		}

		::System::Void SetCustomMatIndex(::System::UInt32 customMatIndex, ::System::Int32 part)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_SETCUSTOMMATINDEX_OFFSET))(this, customMatIndex, part);
		}

		::System::Void SetMatKeyword(::System::String* keyword, ::System::Boolean enable, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_SETMATKEYWORD_OFFSET))(this, keyword, enable, index);
		}

		::System::Void set_customMatIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATIONINSTANCE_SET_CUSTOMMATINDEX_OFFSET))(this, value);
		}
	};
}
