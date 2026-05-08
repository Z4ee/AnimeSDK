#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_VEC3_DOT_OFFSET UNITYSDK_OFFSET(0x1A687810)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_VEC3_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x8EC880)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_VEC3_LONGAXIS_OFFSET UNITYSDK_OFFSET(0x1A686F80)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_VEC3_NEG_OFFSET UNITYSDK_OFFSET(0x1A687250)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_VEC3_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x1A6894C0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_VEC3_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x8EC890)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_VEC3_SUB_OFFSET UNITYSDK_OFFSET(0x1A686F10)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_VEC3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8EC8A0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_VEC3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A689650)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_VEC3___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8EC8B0)

namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet
{
	inline static constexpr unsigned int Vec3_TypeDefinitionIndex = 29740;

	struct alignas(4) Vec3
	{
		static ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3* StaticGet_Zero()
		{
			return (::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3*)Il2CppClass::FromTypeDefinitionIndex(Vec3_TypeDefinitionIndex)->GetStaticField(0x6D40);
		}
		::System::Single X; // 0x10
		::System::Single Y; // 0x14
		::System::Single Z; // 0x18

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_VEC3__CCTOR_OFFSET))();
		}

		::System::Single get_Item(::System::Int32 index)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_VEC3_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_VEC3_SET_ITEM_OFFSET))(this, index, value);
		}

		static ::System::Void Sub(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3& lhs, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3& rhs, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3& result)
		{
			return ((::System::Void(*)(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3&, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3&, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_VEC3_SUB_OFFSET))(lhs, rhs, result);
		}

		static ::System::Void Neg(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3& v)
		{
			return ((::System::Void(*)(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_VEC3_NEG_OFFSET))(v);
		}

		static ::System::Void Dot(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3& u, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3& v, ::System::Single& dot)
		{
			return ((::System::Void(*)(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3&, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3&, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_VEC3_DOT_OFFSET))(u, v, dot);
		}

		static ::System::Void Normalize(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3& v)
		{
			return ((::System::Void(*)(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_VEC3_NORMALIZE_OFFSET))(v);
		}

		static ::System::Int32 LongAxis(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3& v)
		{
			return ((::System::Int32(*)(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_VEC3_LONGAXIS_OFFSET))(v);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_VEC3_TOSTRING_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_VEC3___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
