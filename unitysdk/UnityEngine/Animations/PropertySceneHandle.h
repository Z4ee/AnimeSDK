#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_ANIMATIONS_PROPERTYSCENEHANDLE_CHECKISVALID_OFFSET UNITYSDK_OFFSET(0x9EBBF0)
#define UNITYENGINE_ANIMATIONS_PROPERTYSCENEHANDLE_GETFLOATINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C55EFD0)
#define UNITYENGINE_ANIMATIONS_PROPERTYSCENEHANDLE_GETFLOATINTERNAL_OFFSET UNITYSDK_OFFSET(0x9EBC70)
#define UNITYENGINE_ANIMATIONS_PROPERTYSCENEHANDLE_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x9EBC00)
#define UNITYENGINE_ANIMATIONS_PROPERTYSCENEHANDLE_GET_CREATEDBYNATIVE_OFFSET UNITYSDK_OFFSET(0x5B28F0)
#define UNITYENGINE_ANIMATIONS_PROPERTYSCENEHANDLE_GET_HASHANDLEINDEX_OFFSET UNITYSDK_OFFSET(0x9C5330)
#define UNITYENGINE_ANIMATIONS_PROPERTYSCENEHANDLE_HASVALIDTRANSFORM_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C55EFC0)
#define UNITYENGINE_ANIMATIONS_PROPERTYSCENEHANDLE_HASVALIDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x9EBC60)
#define UNITYENGINE_ANIMATIONS_PROPERTYSCENEHANDLE_ISVALIDINTERNAL_OFFSET UNITYSDK_OFFSET(0x9EBBA0)
#define UNITYENGINE_ANIMATIONS_PROPERTYSCENEHANDLE_ISVALID_OFFSET UNITYSDK_OFFSET(0x9EBB20)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int PropertySceneHandle_TypeDefinitionIndex = 6606;

	struct alignas(4) PropertySceneHandle
	{
		::System::UInt32 valid; // 0x10
		::System::Int32 handleIndex; // 0x14

		/*
		::System::Boolean IsValid(::UnityEngine::Animations::AnimationStream stream)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PROPERTYSCENEHANDLE_ISVALID_OFFSET))(this, stream);
		}
		*/

		/*
		::System::Boolean IsValidInternal(::UnityEngine::Animations::AnimationStream& stream)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationStream&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PROPERTYSCENEHANDLE_ISVALIDINTERNAL_OFFSET))(this, stream);
		}
		*/

		::System::Boolean get_createdByNative()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PROPERTYSCENEHANDLE_GET_CREATEDBYNATIVE_OFFSET))(this);
		}

		::System::Boolean get_hasHandleIndex()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PROPERTYSCENEHANDLE_GET_HASHANDLEINDEX_OFFSET))(this);
		}

		/*
		::System::Void CheckIsValid(::UnityEngine::Animations::AnimationStream& stream)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PROPERTYSCENEHANDLE_CHECKISVALID_OFFSET))(this, stream);
		}
		*/

		/*
		::System::Single GetFloat(::UnityEngine::Animations::AnimationStream stream)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PROPERTYSCENEHANDLE_GETFLOAT_OFFSET))(this, stream);
		}
		*/

		/*
		::System::Boolean HasValidTransform(::UnityEngine::Animations::AnimationStream& stream)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationStream&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PROPERTYSCENEHANDLE_HASVALIDTRANSFORM_OFFSET))(this, stream);
		}
		*/

		/*
		::System::Single GetFloatInternal(::UnityEngine::Animations::AnimationStream& stream)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Animations::AnimationStream&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PROPERTYSCENEHANDLE_GETFLOATINTERNAL_OFFSET))(this, stream);
		}
		*/

		/*
		static ::System::Boolean HasValidTransform_Injected(::UnityEngine::Animations::PropertySceneHandle& _unity_self, ::UnityEngine::Animations::AnimationStream& stream)
		{
			return ((::System::Boolean(*)(::UnityEngine::Animations::PropertySceneHandle&, ::UnityEngine::Animations::AnimationStream&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PROPERTYSCENEHANDLE_HASVALIDTRANSFORM_INJECTED_OFFSET))(_unity_self, stream);
		}
		*/

		/*
		static ::System::Single GetFloatInternal_Injected(::UnityEngine::Animations::PropertySceneHandle& _unity_self, ::UnityEngine::Animations::AnimationStream& stream)
		{
			return ((::System::Single(*)(::UnityEngine::Animations::PropertySceneHandle&, ::UnityEngine::Animations::AnimationStream&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PROPERTYSCENEHANDLE_GETFLOATINTERNAL_INJECTED_OFFSET))(_unity_self, stream);
		}
		*/
	};
}
