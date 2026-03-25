#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ProBuilder/KdTree/Math/TypeMath_1.h"

#define UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_ADD_OFFSET UNITYSDK_OFFSET(0x187B0640)
#define UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_AREEQUAL_OFFSET UNITYSDK_OFFSET(0x187B05F0)
#define UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_COMPARE_OFFSET UNITYSDK_OFFSET(0x187B05A0)
#define UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_DISTANCESQUAREDBETWEENPOINTS_OFFSET UNITYSDK_OFFSET(0x187B0670)
#define UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_GET_MINVALUE_OFFSET UNITYSDK_OFFSET(0x187B0600)
#define UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_GET_NEGATIVEINFINITY_OFFSET UNITYSDK_OFFSET(0x187B0620)
#define UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_GET_POSITIVEINFINITY_OFFSET UNITYSDK_OFFSET(0x187B0630)
#define UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x187B0610)
#define UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x187B0660)
#define UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x187B0650)
#define UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH__CTOR_OFFSET UNITYSDK_OFFSET(0x187B06F0)

namespace UnityEngine::ProBuilder::KdTree::Math
{
	inline static constexpr unsigned int FloatMath_TypeDefinitionIndex = 29772;

	class FloatMath : public ::UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH__CTOR_OFFSET))(this);
		}

		::System::Int32 Compare(::System::Single a, ::System::Single b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_COMPARE_OFFSET))(this, a, b);
		}

		::System::Boolean AreEqual(::System::Single a, ::System::Single b)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_AREEQUAL_OFFSET))(this, a, b);
		}

		::System::Single get_MinValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_GET_MINVALUE_OFFSET))(this);
		}

		::System::Single get_Zero()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_GET_ZERO_OFFSET))(this);
		}

		::System::Single get_NegativeInfinity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_GET_NEGATIVEINFINITY_OFFSET))(this);
		}

		::System::Single get_PositiveInfinity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_GET_POSITIVEINFINITY_OFFSET))(this);
		}

		::System::Single Add(::System::Single a, ::System::Single b)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_ADD_OFFSET))(this, a, b);
		}

		::System::Single Subtract(::System::Single a, ::System::Single b)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_SUBTRACT_OFFSET))(this, a, b);
		}

		::System::Single Multiply(::System::Single a, ::System::Single b)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_MULTIPLY_OFFSET))(this, a, b);
		}

		::System::Single DistanceSquaredBetweenPoints(::Il2CppArray<::System::Single>* a, ::Il2CppArray<::System::Single>* b)
		{
			return ((::System::Single(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_DISTANCESQUAREDBETWEENPOINTS_OFFSET))(this, a, b);
		}
	};
}
