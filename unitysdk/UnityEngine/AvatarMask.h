#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AvatarMaskBodyPart.h"
#include "unitysdk/UnityEngine/AvatarMaskCompressQuality.h"
#include "unitysdk/UnityEngine/Object.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_AVATARMASK_ADDTRANSFORMPATH_1_OFFSET UNITYSDK_OFFSET(0x1FC66BA0)
#define UNITYENGINE_AVATARMASK_ADDTRANSFORMPATH_OFFSET UNITYSDK_OFFSET(0x1FC66B90)
#define UNITYENGINE_AVATARMASK_APPLYMASKROTATIONCOMPRESSQUALITY_OFFSET UNITYSDK_OFFSET(0x1FC66B80)
#define UNITYENGINE_AVATARMASK_APPLYMASKTRANSFORMCOMPRESSQUALITY_OFFSET UNITYSDK_OFFSET(0x1FC66B20)
#define UNITYENGINE_AVATARMASK_APPLYMASKTRANSLATIONCOMPRESSQUALITY_OFFSET UNITYSDK_OFFSET(0x1FC66B50)
#define UNITYENGINE_AVATARMASK_COPY_OFFSET UNITYSDK_OFFSET(0x1FC66D00)
#define UNITYENGINE_AVATARMASK_GETACL2PRECISIONSCALER_OFFSET UNITYSDK_OFFSET(0x1FC66BF0)
#define UNITYENGINE_AVATARMASK_GETHUMANOIDBODYPARTACTIVE_OFFSET UNITYSDK_OFFSET(0x1FC66A80)
#define UNITYENGINE_AVATARMASK_GETNODEROTATIONCOMPORESSQUALITY_OFFSET UNITYSDK_OFFSET(0x1FC66C50)
#define UNITYENGINE_AVATARMASK_GETNODETRANSFORMCOMPORESSQUALITY_OFFSET UNITYSDK_OFFSET(0x1FC66C10)
#define UNITYENGINE_AVATARMASK_GETNODETRANSLATIONCOMPORESSQUALITY_OFFSET UNITYSDK_OFFSET(0x1FC66C30)
#define UNITYENGINE_AVATARMASK_GETTRANSFORMACTIVE_OFFSET UNITYSDK_OFFSET(0x1FC66C90)
#define UNITYENGINE_AVATARMASK_GETTRANSFORMPATH_OFFSET UNITYSDK_OFFSET(0x1FC66BD0)
#define UNITYENGINE_AVATARMASK_GETTRANSFORMWEIGHT_OFFSET UNITYSDK_OFFSET(0x1FC66C70)
#define UNITYENGINE_AVATARMASK_GET_HASFEETIK_OFFSET UNITYSDK_OFFSET(0x1FC66CF0)
#define UNITYENGINE_AVATARMASK_GET_HUMANOIDBODYPARTCOUNT_OFFSET UNITYSDK_OFFSET(0x1FC66A70)
#define UNITYENGINE_AVATARMASK_GET_ISACLMASK2_OFFSET UNITYSDK_OFFSET(0x1FC66AA0)
#define UNITYENGINE_AVATARMASK_GET_MASKBLENDSHAPE_OFFSET UNITYSDK_OFFSET(0x1FC66AC0)
#define UNITYENGINE_AVATARMASK_GET_MASKROTATIONCOMPRESSQUALITY_OFFSET UNITYSDK_OFFSET(0x1FC66B60)
#define UNITYENGINE_AVATARMASK_GET_MASKTRANSFORMCOMPRESSQUALITY_OFFSET UNITYSDK_OFFSET(0x1FC66B00)
#define UNITYENGINE_AVATARMASK_GET_MASKTRANSLATIONCOMPRESSQUALITY_OFFSET UNITYSDK_OFFSET(0x1FC66B30)
#define UNITYENGINE_AVATARMASK_GET_TRANSFORMCOUNT_OFFSET UNITYSDK_OFFSET(0x1FC66AE0)
#define UNITYENGINE_AVATARMASK_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1FC66A60)
#define UNITYENGINE_AVATARMASK_REMOVETRANSFORMPATH_1_OFFSET UNITYSDK_OFFSET(0x1FC66BC0)
#define UNITYENGINE_AVATARMASK_REMOVETRANSFORMPATH_OFFSET UNITYSDK_OFFSET(0x1FC66BB0)
#define UNITYENGINE_AVATARMASK_SETACL2PRECISIONSCALER_OFFSET UNITYSDK_OFFSET(0x1FC66C00)
#define UNITYENGINE_AVATARMASK_SETHUMANOIDBODYPARTACTIVE_OFFSET UNITYSDK_OFFSET(0x1FC66A90)
#define UNITYENGINE_AVATARMASK_SETNODEROTATIONCOMPORESSQUALITY_OFFSET UNITYSDK_OFFSET(0x1FC66C60)
#define UNITYENGINE_AVATARMASK_SETNODETRANSFORMCOMPORESSQUALITY_OFFSET UNITYSDK_OFFSET(0x1FC66C20)
#define UNITYENGINE_AVATARMASK_SETNODETRANSLATIONCOMPORESSQUALITY_OFFSET UNITYSDK_OFFSET(0x1FC66C40)
#define UNITYENGINE_AVATARMASK_SETTRANSFORMACTIVE_OFFSET UNITYSDK_OFFSET(0x1FC66CB0)
#define UNITYENGINE_AVATARMASK_SETTRANSFORMPATH_OFFSET UNITYSDK_OFFSET(0x1FC66BE0)
#define UNITYENGINE_AVATARMASK_SETTRANSFORMWEIGHT_OFFSET UNITYSDK_OFFSET(0x1FC66C80)
#define UNITYENGINE_AVATARMASK_SET_ISACLMASK2_OFFSET UNITYSDK_OFFSET(0x1FC66AB0)
#define UNITYENGINE_AVATARMASK_SET_MASKBLENDSHAPE_OFFSET UNITYSDK_OFFSET(0x1FC66AD0)
#define UNITYENGINE_AVATARMASK_SET_MASKROTATIONCOMPRESSQUALITY_OFFSET UNITYSDK_OFFSET(0x1FC66B70)
#define UNITYENGINE_AVATARMASK_SET_MASKTRANSFORMCOMPRESSQUALITY_OFFSET UNITYSDK_OFFSET(0x1FC66B10)
#define UNITYENGINE_AVATARMASK_SET_MASKTRANSLATIONCOMPRESSQUALITY_OFFSET UNITYSDK_OFFSET(0x1FC66B40)
#define UNITYENGINE_AVATARMASK_SET_TRANSFORMCOUNT_OFFSET UNITYSDK_OFFSET(0x1FC66AF0)
#define UNITYENGINE_AVATARMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC66A00)

namespace UnityEngine
{
	inline static constexpr unsigned int AvatarMask_TypeDefinitionIndex = 6647;

	class AvatarMask : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK__CTOR_OFFSET))(this);
		}

		static ::System::Void Internal_Create(::UnityEngine::AvatarMask* self)
		{
			return ((::System::Void(*)(::UnityEngine::AvatarMask*))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_INTERNAL_CREATE_OFFSET))(self);
		}

		::System::Int32 get_humanoidBodyPartCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_GET_HUMANOIDBODYPARTCOUNT_OFFSET))(this);
		}

		::System::Boolean GetHumanoidBodyPartActive(::UnityEngine::AvatarMaskBodyPart index)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AvatarMaskBodyPart))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_GETHUMANOIDBODYPARTACTIVE_OFFSET))(this, index);
		}

		::System::Void SetHumanoidBodyPartActive(::UnityEngine::AvatarMaskBodyPart index, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AvatarMaskBodyPart, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_SETHUMANOIDBODYPARTACTIVE_OFFSET))(this, index, value);
		}

		::System::Boolean get_isACLMask2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_GET_ISACLMASK2_OFFSET))(this);
		}

		::System::Void set_isACLMask2(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_SET_ISACLMASK2_OFFSET))(this, value);
		}

		::System::Boolean get_maskBlendShape()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_GET_MASKBLENDSHAPE_OFFSET))(this);
		}

		::System::Void set_maskBlendShape(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_SET_MASKBLENDSHAPE_OFFSET))(this, value);
		}

		::System::Int32 get_transformCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_GET_TRANSFORMCOUNT_OFFSET))(this);
		}

		::System::Void set_transformCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_SET_TRANSFORMCOUNT_OFFSET))(this, value);
		}

		::UnityEngine::AvatarMaskCompressQuality get_maskTransformCompressQuality()
		{
			return ((::UnityEngine::AvatarMaskCompressQuality(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_GET_MASKTRANSFORMCOMPRESSQUALITY_OFFSET))(this);
		}

		::System::Void set_maskTransformCompressQuality(::UnityEngine::AvatarMaskCompressQuality value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AvatarMaskCompressQuality))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_SET_MASKTRANSFORMCOMPRESSQUALITY_OFFSET))(this, value);
		}

		::System::Void ApplyMaskTransformCompressQuality()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_APPLYMASKTRANSFORMCOMPRESSQUALITY_OFFSET))(this);
		}

		::UnityEngine::AvatarMaskCompressQuality get_maskTranslationCompressQuality()
		{
			return ((::UnityEngine::AvatarMaskCompressQuality(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_GET_MASKTRANSLATIONCOMPRESSQUALITY_OFFSET))(this);
		}

		::System::Void set_maskTranslationCompressQuality(::UnityEngine::AvatarMaskCompressQuality value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AvatarMaskCompressQuality))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_SET_MASKTRANSLATIONCOMPRESSQUALITY_OFFSET))(this, value);
		}

		::System::Void ApplyMaskTranslationCompressQuality()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_APPLYMASKTRANSLATIONCOMPRESSQUALITY_OFFSET))(this);
		}

		::UnityEngine::AvatarMaskCompressQuality get_maskRotationCompressQuality()
		{
			return ((::UnityEngine::AvatarMaskCompressQuality(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_GET_MASKROTATIONCOMPRESSQUALITY_OFFSET))(this);
		}

		::System::Void set_maskRotationCompressQuality(::UnityEngine::AvatarMaskCompressQuality value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AvatarMaskCompressQuality))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_SET_MASKROTATIONCOMPRESSQUALITY_OFFSET))(this, value);
		}

		::System::Void ApplyMaskRotationCompressQuality()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_APPLYMASKROTATIONCOMPRESSQUALITY_OFFSET))(this);
		}

		::System::Void AddTransformPath(::UnityEngine::Transform* transform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_ADDTRANSFORMPATH_OFFSET))(this, transform);
		}

		::System::Void AddTransformPath_1(::UnityEngine::Transform* transform, ::System::Boolean recursive)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_ADDTRANSFORMPATH_1_OFFSET))(this, transform, recursive);
		}

		::System::Void RemoveTransformPath(::UnityEngine::Transform* transform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_REMOVETRANSFORMPATH_OFFSET))(this, transform);
		}

		::System::Void RemoveTransformPath_1(::UnityEngine::Transform* transform, ::System::Boolean recursive)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_REMOVETRANSFORMPATH_1_OFFSET))(this, transform, recursive);
		}

		::System::String* GetTransformPath(::System::Int32 index)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_GETTRANSFORMPATH_OFFSET))(this, index);
		}

		::System::Void SetTransformPath(::System::Int32 index, ::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_SETTRANSFORMPATH_OFFSET))(this, index, path);
		}

		::System::Single GetACL2PrecisionScaler(::System::Int32 index)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_GETACL2PRECISIONSCALER_OFFSET))(this, index);
		}

		::System::Void SetACL2PrecisionScaler(::System::Int32 index, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_SETACL2PRECISIONSCALER_OFFSET))(this, index, value);
		}

		::UnityEngine::AvatarMaskCompressQuality GetNodeTransformComporessQuality(::System::Int32 index)
		{
			return ((::UnityEngine::AvatarMaskCompressQuality(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_GETNODETRANSFORMCOMPORESSQUALITY_OFFSET))(this, index);
		}

		::System::Void SetNodeTransformComporessQuality(::System::Int32 index, ::UnityEngine::AvatarMaskCompressQuality value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::AvatarMaskCompressQuality))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_SETNODETRANSFORMCOMPORESSQUALITY_OFFSET))(this, index, value);
		}

		::UnityEngine::AvatarMaskCompressQuality GetNodeTranslationComporessQuality(::System::Int32 index)
		{
			return ((::UnityEngine::AvatarMaskCompressQuality(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_GETNODETRANSLATIONCOMPORESSQUALITY_OFFSET))(this, index);
		}

		::System::Void SetNodeTranslationComporessQuality(::System::Int32 index, ::UnityEngine::AvatarMaskCompressQuality value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::AvatarMaskCompressQuality))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_SETNODETRANSLATIONCOMPORESSQUALITY_OFFSET))(this, index, value);
		}

		::UnityEngine::AvatarMaskCompressQuality GetNodeRotationComporessQuality(::System::Int32 index)
		{
			return ((::UnityEngine::AvatarMaskCompressQuality(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_GETNODEROTATIONCOMPORESSQUALITY_OFFSET))(this, index);
		}

		::System::Void SetNodeRotationComporessQuality(::System::Int32 index, ::UnityEngine::AvatarMaskCompressQuality value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::AvatarMaskCompressQuality))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_SETNODEROTATIONCOMPORESSQUALITY_OFFSET))(this, index, value);
		}

		::System::Single GetTransformWeight(::System::Int32 index)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_GETTRANSFORMWEIGHT_OFFSET))(this, index);
		}

		::System::Void SetTransformWeight(::System::Int32 index, ::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_SETTRANSFORMWEIGHT_OFFSET))(this, index, weight);
		}

		::System::Boolean GetTransformActive(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_GETTRANSFORMACTIVE_OFFSET))(this, index);
		}

		::System::Void SetTransformActive(::System::Int32 index, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_SETTRANSFORMACTIVE_OFFSET))(this, index, value);
		}

		::System::Boolean get_hasFeetIK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_GET_HASFEETIK_OFFSET))(this);
		}

		::System::Void Copy(::UnityEngine::AvatarMask* other)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AvatarMask*))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_COPY_OFFSET))(this, other);
		}
	};
}
