#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/FourCC.h"

namespace System { class Type; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_COPYTOFROM_OFFSET UNITYSDK_OFFSET(0xA02150)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_FLOATTOPRIMITIVEVALUE_OFFSET UNITYSDK_OFFSET(0xA020E0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GETPRIMITIVEFORMATFROMTYPE_OFFSET UNITYSDK_OFFSET(0x1E0E1C20)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GETSIZEOFPRIMITIVEFORMATINBITS_OFFSET UNITYSDK_OFFSET(0x1E0E17A0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_ALIGNEDSIZEINBYTES_OFFSET UNITYSDK_OFFSET(0xA02070)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_BITOFFSET_OFFSET UNITYSDK_OFFSET(0x32EEE0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_BYTEOFFSET_OFFSET UNITYSDK_OFFSET(0x424ED0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_EFFECTIVEBITOFFSET_OFFSET UNITYSDK_OFFSET(0xA02090)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_EFFECTIVEBYTEOFFSET_OFFSET UNITYSDK_OFFSET(0xA02080)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x325570)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_SIZEINBITS_OFFSET UNITYSDK_OFFSET(0x330F60)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_READDOUBLE_OFFSET UNITYSDK_OFFSET(0xA02100)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_READFLOAT_OFFSET UNITYSDK_OFFSET(0xA020C0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_READINT_OFFSET UNITYSDK_OFFSET(0xA020A0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_SET_BITOFFSET_OFFSET UNITYSDK_OFFSET(0x3C9D90)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_SET_BYTEOFFSET_OFFSET UNITYSDK_OFFSET(0x6329D0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_SET_FORMAT_OFFSET UNITYSDK_OFFSET(0x3253A0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_SET_SIZEINBITS_OFFSET UNITYSDK_OFFSET(0x599190)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_WRITEDOUBLE_OFFSET UNITYSDK_OFFSET(0xA02110)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_WRITEFLOAT_OFFSET UNITYSDK_OFFSET(0xA020D0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_WRITEINT_OFFSET UNITYSDK_OFFSET(0xA020B0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_WRITE_OFFSET UNITYSDK_OFFSET(0xA02120)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0E3C20)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputStateBlock_TypeDefinitionIndex = 32566;

	struct alignas(4) InputStateBlock
	{
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatBit()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x7C50);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatUShort()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x7C54);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatVector3()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x7C58);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatByte()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x7C5C);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatUInt()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x7C60);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatULong()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x7C64);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatVector2Byte()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x7C68);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatFloat()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x7C6C);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatLong()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x7C70);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatVector2Short()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x7C74);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatQuaternion()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x7C78);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatSBit()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x7C7C);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatSByte()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x7C80);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatVector3Short()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x7C84);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatInt()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x7C88);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatShort()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x7C8C);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatVector3Byte()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x7C90);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatDouble()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x7C94);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatVector2()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x7C98);
		}
		// static const ::System::UInt32 InvalidOffset = 0xFFFFFFFF; // 0x0
		// static const ::System::UInt32 AutomaticOffset = 0xFFFFFFFE; // 0x0
		// static const ::System::Int32 kFormatBit = 0x42495420; // 0x0
		// static const ::System::Int32 kFormatSBit = 0x53424954; // 0x0
		// static const ::System::Int32 kFormatInt = 0x494E5420; // 0x0
		// static const ::System::Int32 kFormatUInt = 0x55494E54; // 0x0
		// static const ::System::Int32 kFormatShort = 0x53485254; // 0x0
		// static const ::System::Int32 kFormatUShort = 0x55534854; // 0x0
		// static const ::System::Int32 kFormatByte = 0x42595445; // 0x0
		// static const ::System::Int32 kFormatSByte = 0x53425954; // 0x0
		// static const ::System::Int32 kFormatLong = 0x4C4E4720; // 0x0
		// static const ::System::Int32 kFormatULong = 0x554C4E47; // 0x0
		// static const ::System::Int32 kFormatFloat = 0x464C5420; // 0x0
		// static const ::System::Int32 kFormatDouble = 0x44424C20; // 0x0
		::UnityEngine::InputSystem::Utilities::FourCC _format_k__BackingField; // 0x10
		::System::UInt32 _byteOffset_k__BackingField; // 0x14
		::System::UInt32 _bitOffset_k__BackingField; // 0x18
		::System::UInt32 _sizeInBits_k__BackingField; // 0x1C

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK__CCTOR_OFFSET))();
		}

		static ::System::Int32 GetSizeOfPrimitiveFormatInBits(::UnityEngine::InputSystem::Utilities::FourCC type)
		{
			return ((::System::Int32(*)(::UnityEngine::InputSystem::Utilities::FourCC))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GETSIZEOFPRIMITIVEFORMATINBITS_OFFSET))(type);
		}

		static ::UnityEngine::InputSystem::Utilities::FourCC GetPrimitiveFormatFromType(::System::Type* type)
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GETPRIMITIVEFORMATFROMTYPE_OFFSET))(type);
		}

		::UnityEngine::InputSystem::Utilities::FourCC get_format()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_FORMAT_OFFSET))(this);
		}

		::System::Void set_format(::UnityEngine::InputSystem::Utilities::FourCC value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::FourCC))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_SET_FORMAT_OFFSET))(this, value);
		}

		::System::UInt32 get_byteOffset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_BYTEOFFSET_OFFSET))(this);
		}

		::System::Void set_byteOffset(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_SET_BYTEOFFSET_OFFSET))(this, value);
		}

		::System::UInt32 get_bitOffset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_BITOFFSET_OFFSET))(this);
		}

		::System::Void set_bitOffset(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_SET_BITOFFSET_OFFSET))(this, value);
		}

		::System::UInt32 get_sizeInBits()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_SIZEINBITS_OFFSET))(this);
		}

		::System::Void set_sizeInBits(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_SET_SIZEINBITS_OFFSET))(this, value);
		}

		::System::UInt32 get_alignedSizeInBytes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_ALIGNEDSIZEINBYTES_OFFSET))(this);
		}

		::System::UInt32 get_effectiveByteOffset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_EFFECTIVEBYTEOFFSET_OFFSET))(this);
		}

		::System::UInt32 get_effectiveBitOffset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_EFFECTIVEBITOFFSET_OFFSET))(this);
		}

		::System::Int32 ReadInt(::System::Void* statePtr)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_READINT_OFFSET))(this, statePtr);
		}

		::System::Void WriteInt(::System::Void* statePtr, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Void*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_WRITEINT_OFFSET))(this, statePtr, value);
		}

		::System::Single ReadFloat(::System::Void* statePtr)
		{
			return ((::System::Single(*)(::PVOID, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_READFLOAT_OFFSET))(this, statePtr);
		}

		::System::Void WriteFloat(::System::Void* statePtr, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Void*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_WRITEFLOAT_OFFSET))(this, statePtr, value);
		}

		/*
		::UnityEngine::InputSystem::Utilities::PrimitiveValue FloatToPrimitiveValue(::System::Single value)
		{
			return ((::UnityEngine::InputSystem::Utilities::PrimitiveValue(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_FLOATTOPRIMITIVEVALUE_OFFSET))(this, value);
		}
		*/

		::System::Double ReadDouble(::System::Void* statePtr)
		{
			return ((::System::Double(*)(::PVOID, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_READDOUBLE_OFFSET))(this, statePtr);
		}

		::System::Void WriteDouble(::System::Void* statePtr, ::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Void*, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_WRITEDOUBLE_OFFSET))(this, statePtr, value);
		}

		/*
		::System::Void Write(::System::Void* statePtr, ::UnityEngine::InputSystem::Utilities::PrimitiveValue value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Void*, ::UnityEngine::InputSystem::Utilities::PrimitiveValue))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_WRITE_OFFSET))(this, statePtr, value);
		}
		*/

		::System::Void CopyToFrom(::System::Void* toStatePtr, ::System::Void* fromStatePtr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Void*, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_COPYTOFROM_OFFSET))(this, toStatePtr, fromStatePtr);
		}
	};
}
