#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_BOUNDSINT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C6D080)
#define UNITYENGINE_BOUNDSINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C6CFF0)
#define UNITYENGINE_BOUNDSINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C6D0D0)
#define UNITYENGINE_BOUNDSINT_GET_MAX_OFFSET UNITYSDK_OFFSET(0x3C6CE90)
#define UNITYENGINE_BOUNDSINT_GET_MIN_OFFSET UNITYSDK_OFFSET(0x3C6CDF0)
#define UNITYENGINE_BOUNDSINT_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1670)
#define UNITYENGINE_BOUNDSINT_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1690)
#define UNITYENGINE_BOUNDSINT_GET_XMAX_OFFSET UNITYSDK_OFFSET(0x3C6CF80)
#define UNITYENGINE_BOUNDSINT_GET_XMIN_OFFSET UNITYSDK_OFFSET(0x3C6CEF0)
#define UNITYENGINE_BOUNDSINT_GET_YMAX_OFFSET UNITYSDK_OFFSET(0x3C6CFA0)
#define UNITYENGINE_BOUNDSINT_GET_YMIN_OFFSET UNITYSDK_OFFSET(0x3C6CF20)
#define UNITYENGINE_BOUNDSINT_GET_ZMAX_OFFSET UNITYSDK_OFFSET(0x3C6CFC0)
#define UNITYENGINE_BOUNDSINT_GET_ZMIN_OFFSET UNITYSDK_OFFSET(0x3C6CF50)
#define UNITYENGINE_BOUNDSINT_SET_MAX_OFFSET UNITYSDK_OFFSET(0x3C6CED0)
#define UNITYENGINE_BOUNDSINT_SET_MIN_OFFSET UNITYSDK_OFFSET(0x3C6CE30)
#define UNITYENGINE_BOUNDSINT_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x202EFC0)
#define UNITYENGINE_BOUNDSINT_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x1C7220)
#define UNITYENGINE_BOUNDSINT_SET_XMAX_OFFSET UNITYSDK_OFFSET(0x3C6CF90)
#define UNITYENGINE_BOUNDSINT_SET_XMIN_OFFSET UNITYSDK_OFFSET(0x3C6CF00)
#define UNITYENGINE_BOUNDSINT_SET_YMAX_OFFSET UNITYSDK_OFFSET(0x3C6CFB0)
#define UNITYENGINE_BOUNDSINT_SET_YMIN_OFFSET UNITYSDK_OFFSET(0x3C6CF30)
#define UNITYENGINE_BOUNDSINT_SET_ZMAX_OFFSET UNITYSDK_OFFSET(0x3C6CFD0)
#define UNITYENGINE_BOUNDSINT_SET_ZMIN_OFFSET UNITYSDK_OFFSET(0x3C6CF60)
#define UNITYENGINE_BOUNDSINT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C6CFE0)
#define UNITYENGINE_BOUNDSINT__CTOR_OFFSET UNITYSDK_OFFSET(0x15A0)

namespace UnityEngine
{
	inline static constexpr unsigned int BoundsInt_TypeDefinitionIndex = 4076;

	struct alignas(4) BoundsInt
	{
		::UnityEngine::Vector3Int m_Position; // 0x10
		::UnityEngine::Vector3Int m_Size; // 0x1C

		::System::Void _ctor(::UnityEngine::Vector3Int a1, ::UnityEngine::Vector3Int a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDSINT__CTOR_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3Int get_min()
		{
			return ((::UnityEngine::Vector3Int(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDSINT_GET_MIN_OFFSET))(this);
		}

		::System::Void set_min(::UnityEngine::Vector3Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDSINT_SET_MIN_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3Int get_max()
		{
			return ((::UnityEngine::Vector3Int(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDSINT_GET_MAX_OFFSET))(this);
		}

		::System::Void set_max(::UnityEngine::Vector3Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDSINT_SET_MAX_OFFSET))(this, a1);
		}

		::System::Int32 get_xMin()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDSINT_GET_XMIN_OFFSET))(this);
		}

		::System::Void set_xMin(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDSINT_SET_XMIN_OFFSET))(this, a1);
		}

		::System::Int32 get_yMin()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDSINT_GET_YMIN_OFFSET))(this);
		}

		::System::Void set_yMin(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDSINT_SET_YMIN_OFFSET))(this, a1);
		}

		::System::Int32 get_zMin()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDSINT_GET_ZMIN_OFFSET))(this);
		}

		::System::Void set_zMin(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDSINT_SET_ZMIN_OFFSET))(this, a1);
		}

		::System::Int32 get_xMax()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDSINT_GET_XMAX_OFFSET))(this);
		}

		::System::Void set_xMax(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDSINT_SET_XMAX_OFFSET))(this, a1);
		}

		::System::Int32 get_yMax()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDSINT_GET_YMAX_OFFSET))(this);
		}

		::System::Void set_yMax(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDSINT_SET_YMAX_OFFSET))(this, a1);
		}

		::System::Int32 get_zMax()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDSINT_GET_ZMAX_OFFSET))(this);
		}

		::System::Void set_zMax(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDSINT_SET_ZMAX_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3Int get_position()
		{
			return ((::UnityEngine::Vector3Int(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDSINT_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_position(::UnityEngine::Vector3Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDSINT_SET_POSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3Int get_size()
		{
			return ((::UnityEngine::Vector3Int(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDSINT_GET_SIZE_OFFSET))(this);
		}

		::System::Void set_size(::UnityEngine::Vector3Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDSINT_SET_SIZE_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDSINT_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDSINT_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::UnityEngine::BoundsInt a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::BoundsInt))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDSINT_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDSINT_GETHASHCODE_OFFSET))(this);
		}
	};
}
