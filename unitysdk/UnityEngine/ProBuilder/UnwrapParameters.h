#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_PROBUILDER_UNWRAPPARAMETERS_GET_ANGLEERROR_OFFSET UNITYSDK_OFFSET(0x188B0310)
#define UNITYENGINE_PROBUILDER_UNWRAPPARAMETERS_GET_AREAERROR_OFFSET UNITYSDK_OFFSET(0x188B0330)
#define UNITYENGINE_PROBUILDER_UNWRAPPARAMETERS_GET_HARDANGLE_OFFSET UNITYSDK_OFFSET(0x188B02D0)
#define UNITYENGINE_PROBUILDER_UNWRAPPARAMETERS_GET_PACKMARGIN_OFFSET UNITYSDK_OFFSET(0x188B02F0)
#define UNITYENGINE_PROBUILDER_UNWRAPPARAMETERS_RESET_OFFSET UNITYSDK_OFFSET(0x188B0350)
#define UNITYENGINE_PROBUILDER_UNWRAPPARAMETERS_SET_ANGLEERROR_OFFSET UNITYSDK_OFFSET(0x188B0320)
#define UNITYENGINE_PROBUILDER_UNWRAPPARAMETERS_SET_AREAERROR_OFFSET UNITYSDK_OFFSET(0x188B0340)
#define UNITYENGINE_PROBUILDER_UNWRAPPARAMETERS_SET_HARDANGLE_OFFSET UNITYSDK_OFFSET(0x188B02E0)
#define UNITYENGINE_PROBUILDER_UNWRAPPARAMETERS_SET_PACKMARGIN_OFFSET UNITYSDK_OFFSET(0x188B0300)
#define UNITYENGINE_PROBUILDER_UNWRAPPARAMETERS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x188B0360)
#define UNITYENGINE_PROBUILDER_UNWRAPPARAMETERS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x188771A0)
#define UNITYENGINE_PROBUILDER_UNWRAPPARAMETERS__CTOR_OFFSET UNITYSDK_OFFSET(0x18898BB0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int UnwrapParameters_TypeDefinitionIndex = 34181;

	class UnwrapParameters : public ::System::Object
	{
	public:
		// static const ::System::Single k_HardAngle; // 0x0
		// static const ::System::Single k_PackMargin; // 0x0
		// static const ::System::Single k_AngleError; // 0x0
		// static const ::System::Single k_AreaError; // 0x0
		::System::Single m_HardAngle; // 0x10
		::System::Single m_PackMargin; // 0x14
		::System::Single m_AngleError; // 0x18
		::System::Single m_AreaError; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_UNWRAPPARAMETERS__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::ProBuilder::UnwrapParameters* other)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::UnwrapParameters*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_UNWRAPPARAMETERS__CTOR_1_OFFSET))(this, other);
		}

		::System::Single get_hardAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_UNWRAPPARAMETERS_GET_HARDANGLE_OFFSET))(this);
		}

		::System::Void set_hardAngle(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_UNWRAPPARAMETERS_SET_HARDANGLE_OFFSET))(this, value);
		}

		::System::Single get_packMargin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_UNWRAPPARAMETERS_GET_PACKMARGIN_OFFSET))(this);
		}

		::System::Void set_packMargin(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_UNWRAPPARAMETERS_SET_PACKMARGIN_OFFSET))(this, value);
		}

		::System::Single get_angleError()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_UNWRAPPARAMETERS_GET_ANGLEERROR_OFFSET))(this);
		}

		::System::Void set_angleError(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_UNWRAPPARAMETERS_SET_ANGLEERROR_OFFSET))(this, value);
		}

		::System::Single get_areaError()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_UNWRAPPARAMETERS_GET_AREAERROR_OFFSET))(this);
		}

		::System::Void set_areaError(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_UNWRAPPARAMETERS_SET_AREAERROR_OFFSET))(this, value);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_UNWRAPPARAMETERS_RESET_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_UNWRAPPARAMETERS_TOSTRING_OFFSET))(this);
		}
	};
}
