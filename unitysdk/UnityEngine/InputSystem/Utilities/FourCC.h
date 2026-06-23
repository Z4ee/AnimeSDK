#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_FOURCC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA0A8C0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_FOURCC_EQUALS_OFFSET UNITYSDK_OFFSET(0x6DBDC0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_FOURCC_FROMINT32_OFFSET UNITYSDK_OFFSET(0x1D74B850)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_FOURCC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_FOURCC_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1D74B840)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_FOURCC_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1D742D50)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_FOURCC_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1D74B490)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_FOURCC_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1D74A630)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_FOURCC_TOINT32_OFFSET UNITYSDK_OFFSET(0x1D74B860)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_FOURCC_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA0A8B0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_FOURCC__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA0A880)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_FOURCC__CTOR_2_OFFSET UNITYSDK_OFFSET(0xA0A8A0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_FOURCC__CTOR_OFFSET UNITYSDK_OFFSET(0x2B66C0)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int FourCC_TypeDefinitionIndex = 32046;

	struct alignas(4) FourCC
	{
		::System::Int32 m_Code; // 0x10

		::System::Void _ctor(::System::Int32 code)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_FOURCC__CTOR_OFFSET))(this, code);
		}

		::System::Void _ctor_1(::System::Char a, ::System::Char b, ::System::Char c, ::System::Char d)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Char, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_FOURCC__CTOR_1_OFFSET))(this, a, b, c, d);
		}

		::System::Void _ctor_2(::System::String* str)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_FOURCC__CTOR_2_OFFSET))(this, str);
		}

		static ::System::Int32 op_Implicit(::UnityEngine::InputSystem::Utilities::FourCC fourCC)
		{
			return ((::System::Int32(*)(::UnityEngine::InputSystem::Utilities::FourCC))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_FOURCC_OP_IMPLICIT_OFFSET))(fourCC);
		}

		static ::UnityEngine::InputSystem::Utilities::FourCC op_Implicit_1(::System::Int32 i)
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_FOURCC_OP_IMPLICIT_1_OFFSET))(i);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_FOURCC_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::InputSystem::Utilities::FourCC other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::FourCC))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_FOURCC_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_FOURCC_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_FOURCC_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::UnityEngine::InputSystem::Utilities::FourCC left, ::UnityEngine::InputSystem::Utilities::FourCC right)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::FourCC, ::UnityEngine::InputSystem::Utilities::FourCC))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_FOURCC_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::InputSystem::Utilities::FourCC left, ::UnityEngine::InputSystem::Utilities::FourCC right)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::FourCC, ::UnityEngine::InputSystem::Utilities::FourCC))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_FOURCC_OP_INEQUALITY_OFFSET))(left, right);
		}

		static ::UnityEngine::InputSystem::Utilities::FourCC FromInt32(::System::Int32 i)
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_FOURCC_FROMINT32_OFFSET))(i);
		}

		static ::System::Int32 ToInt32(::UnityEngine::InputSystem::Utilities::FourCC fourCC)
		{
			return ((::System::Int32(*)(::UnityEngine::InputSystem::Utilities::FourCC))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_FOURCC_TOINT32_OFFSET))(fourCC);
		}
	};
}
