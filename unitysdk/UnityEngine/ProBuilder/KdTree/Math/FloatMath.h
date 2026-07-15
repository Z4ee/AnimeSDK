#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ProBuilder/KdTree/Math/TypeMath_1.h"

#define UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_ADD_OFFSET UNITYSDK_OFFSET(0x1D3056C0)
#define UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_AREEQUAL_OFFSET UNITYSDK_OFFSET(0x1D305670)
#define UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_COMPARE_OFFSET UNITYSDK_OFFSET(0x1D305620)
#define UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_DISTANCESQUAREDBETWEENPOINTS_OFFSET UNITYSDK_OFFSET(0x1D3056F0)
#define UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_GET_MINVALUE_OFFSET UNITYSDK_OFFSET(0x1D305680)
#define UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_GET_NEGATIVEINFINITY_OFFSET UNITYSDK_OFFSET(0x1D3056A0)
#define UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_GET_POSITIVEINFINITY_OFFSET UNITYSDK_OFFSET(0x1D3056B0)
#define UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x1D305690)
#define UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1D3056E0)
#define UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x1D3056D0)
#define UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH__CTOR_OFFSET UNITYSDK_OFFSET(0x1D305760)

namespace UnityEngine::ProBuilder::KdTree::Math
{
	inline static constexpr unsigned int FloatMath_TypeDefinitionIndex = 36574;

	class FloatMath : public ::UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH__CTOR_OFFSET))(this);
		}

		::System::Int32 Compare(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_COMPARE_OFFSET))(this, a1, a2);
		}

		::System::Boolean AreEqual(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_AREEQUAL_OFFSET))(this, a1, a2);
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

		::System::Single Add(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_ADD_OFFSET))(this, a1, a2);
		}

		::System::Single Subtract(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_SUBTRACT_OFFSET))(this, a1, a2);
		}

		::System::Single Multiply(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_MULTIPLY_OFFSET))(this, a1, a2);
		}

		::System::Single DistanceSquaredBetweenPoints(::Il2CppArray<::System::Single>* a1, ::Il2CppArray<::System::Single>* a2)
		{
			return ((::System::Single(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_DISTANCESQUAREDBETWEENPOINTS_OFFSET))(this, a1, a2);
		}
	};
}
