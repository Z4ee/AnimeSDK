#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_BOUNDSINT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C583E0)
#define UNITYENGINE_BOUNDSINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C58350)
#define UNITYENGINE_BOUNDSINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C58430)
#define UNITYENGINE_BOUNDSINT_GET_MAX_OFFSET UNITYSDK_OFFSET(0x3C581F0)
#define UNITYENGINE_BOUNDSINT_GET_MIN_OFFSET UNITYSDK_OFFSET(0x3C58150)
#define UNITYENGINE_BOUNDSINT_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x17670)
#define UNITYENGINE_BOUNDSINT_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x379FAC0)
#define UNITYENGINE_BOUNDSINT_GET_XMAX_OFFSET UNITYSDK_OFFSET(0x3C582E0)
#define UNITYENGINE_BOUNDSINT_GET_XMIN_OFFSET UNITYSDK_OFFSET(0x3C58250)
#define UNITYENGINE_BOUNDSINT_GET_YMAX_OFFSET UNITYSDK_OFFSET(0x3C58300)
#define UNITYENGINE_BOUNDSINT_GET_YMIN_OFFSET UNITYSDK_OFFSET(0x3C58280)
#define UNITYENGINE_BOUNDSINT_GET_ZMAX_OFFSET UNITYSDK_OFFSET(0x3C58320)
#define UNITYENGINE_BOUNDSINT_GET_ZMIN_OFFSET UNITYSDK_OFFSET(0x3C582B0)
#define UNITYENGINE_BOUNDSINT_SET_MAX_OFFSET UNITYSDK_OFFSET(0x3C58230)
#define UNITYENGINE_BOUNDSINT_SET_MIN_OFFSET UNITYSDK_OFFSET(0x3C58190)
#define UNITYENGINE_BOUNDSINT_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x17490)
#define UNITYENGINE_BOUNDSINT_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x379FAE0)
#define UNITYENGINE_BOUNDSINT_SET_XMAX_OFFSET UNITYSDK_OFFSET(0x3C582F0)
#define UNITYENGINE_BOUNDSINT_SET_XMIN_OFFSET UNITYSDK_OFFSET(0x3C58260)
#define UNITYENGINE_BOUNDSINT_SET_YMAX_OFFSET UNITYSDK_OFFSET(0x3C58310)
#define UNITYENGINE_BOUNDSINT_SET_YMIN_OFFSET UNITYSDK_OFFSET(0x3C58290)
#define UNITYENGINE_BOUNDSINT_SET_ZMAX_OFFSET UNITYSDK_OFFSET(0x3C58330)
#define UNITYENGINE_BOUNDSINT_SET_ZMIN_OFFSET UNITYSDK_OFFSET(0x3C582C0)
#define UNITYENGINE_BOUNDSINT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C58340)
#define UNITYENGINE_BOUNDSINT__CTOR_OFFSET UNITYSDK_OFFSET(0x6BC260)

namespace UnityEngine
{
	inline static constexpr unsigned int BoundsInt_TypeDefinitionIndex = 4075;

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
