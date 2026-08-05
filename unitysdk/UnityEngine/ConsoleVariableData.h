#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_CONSOLEVARIABLEDATA_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1EA5D590)
#define UNITYENGINE_CONSOLEVARIABLEDATA_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1EA5D5B0)
#define UNITYENGINE_CONSOLEVARIABLEDATA_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0x1EA5D5D0)
#define UNITYENGINE_CONSOLEVARIABLEDATA_OP_IMPLICIT_4_OFFSET UNITYSDK_OFFSET(0x1EA5D5F0)
#define UNITYENGINE_CONSOLEVARIABLEDATA_OP_IMPLICIT_5_OFFSET UNITYSDK_OFFSET(0x1EA5D600)
#define UNITYENGINE_CONSOLEVARIABLEDATA_OP_IMPLICIT_6_OFFSET UNITYSDK_OFFSET(0x1EA5D610)
#define UNITYENGINE_CONSOLEVARIABLEDATA_OP_IMPLICIT_7_OFFSET UNITYSDK_OFFSET(0x1EA5D620)
#define UNITYENGINE_CONSOLEVARIABLEDATA_OP_IMPLICIT_8_OFFSET UNITYSDK_OFFSET(0x1EA5D630)
#define UNITYENGINE_CONSOLEVARIABLEDATA_OP_IMPLICIT_9_OFFSET UNITYSDK_OFFSET(0x1EA5D650)
#define UNITYENGINE_CONSOLEVARIABLEDATA_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1EA5D570)
#define UNITYENGINE_CONSOLEVARIABLEDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA53E20)
#define UNITYENGINE_CONSOLEVARIABLEDATA__CTOR_2_OFFSET UNITYSDK_OFFSET(0xA53E40)
#define UNITYENGINE_CONSOLEVARIABLEDATA__CTOR_3_OFFSET UNITYSDK_OFFSET(0xA53E60)
#define UNITYENGINE_CONSOLEVARIABLEDATA__CTOR_4_OFFSET UNITYSDK_OFFSET(0x31EB80)
#define UNITYENGINE_CONSOLEVARIABLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA53E00)

namespace UnityEngine
{
	inline static constexpr unsigned int ConsoleVariableData_TypeDefinitionIndex = 5153;

	struct alignas(4) ConsoleVariableData
	{
		::System::Int32 v0; // 0x10
		::System::Int32 v1; // 0x14
		::System::Int32 v2; // 0x18
		::System::Int32 v3; // 0x1C

		::System::Void _ctor(::System::Boolean b)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEDATA__CTOR_OFFSET))(this, b);
		}

		::System::Void _ctor_1(::System::Single f)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEDATA__CTOR_1_OFFSET))(this, f);
		}

		::System::Void _ctor_2(::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEDATA__CTOR_2_OFFSET))(this, i);
		}

		/*
		::System::Void _ctor_3(::UnityEngine::Vector3 v3f)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEDATA__CTOR_3_OFFSET))(this, v3f);
		}
		*/

		/*
		::System::Void _ctor_4(::UnityEngine::Vector4 v4f)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEDATA__CTOR_4_OFFSET))(this, v4f);
		}
		*/

		static ::UnityEngine::ConsoleVariableData op_Implicit(::System::Boolean b)
		{
			return ((::UnityEngine::ConsoleVariableData(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEDATA_OP_IMPLICIT_OFFSET))(b);
		}

		static ::UnityEngine::ConsoleVariableData op_Implicit_1(::System::Int32 i)
		{
			return ((::UnityEngine::ConsoleVariableData(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEDATA_OP_IMPLICIT_1_OFFSET))(i);
		}

		static ::UnityEngine::ConsoleVariableData op_Implicit_2(::System::Single f)
		{
			return ((::UnityEngine::ConsoleVariableData(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEDATA_OP_IMPLICIT_2_OFFSET))(f);
		}

		/*
		static ::UnityEngine::ConsoleVariableData op_Implicit_3(::UnityEngine::Vector3 v3)
		{
			return ((::UnityEngine::ConsoleVariableData(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEDATA_OP_IMPLICIT_3_OFFSET))(v3);
		}
		*/

		/*
		static ::UnityEngine::ConsoleVariableData op_Implicit_4(::UnityEngine::Vector4 v4)
		{
			return ((::UnityEngine::ConsoleVariableData(*)(::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEDATA_OP_IMPLICIT_4_OFFSET))(v4);
		}
		*/

		static ::System::Boolean op_Implicit_5(::UnityEngine::ConsoleVariableData v)
		{
			return ((::System::Boolean(*)(::UnityEngine::ConsoleVariableData))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEDATA_OP_IMPLICIT_5_OFFSET))(v);
		}

		static ::System::Int32 op_Implicit_6(::UnityEngine::ConsoleVariableData v)
		{
			return ((::System::Int32(*)(::UnityEngine::ConsoleVariableData))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEDATA_OP_IMPLICIT_6_OFFSET))(v);
		}

		static ::System::Single op_Implicit_7(::UnityEngine::ConsoleVariableData v)
		{
			return ((::System::Single(*)(::UnityEngine::ConsoleVariableData))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEDATA_OP_IMPLICIT_7_OFFSET))(v);
		}

		/*
		static ::UnityEngine::Vector3 op_Implicit_8(::UnityEngine::ConsoleVariableData v)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::ConsoleVariableData))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEDATA_OP_IMPLICIT_8_OFFSET))(v);
		}
		*/

		/*
		static ::UnityEngine::Vector4 op_Implicit_9(::UnityEngine::ConsoleVariableData v)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::ConsoleVariableData))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEVARIABLEDATA_OP_IMPLICIT_9_OFFSET))(v);
		}
		*/
	};
}
