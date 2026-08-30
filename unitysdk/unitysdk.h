#pragma once
#include <stdint.h>
#include <windows.h>

#ifndef UNITYSDK_OFFSET
#define UNITYSDK_OFFSET(offset) offset
#endif

#define IL2CPPCLASS_FROMTYPEDEFINITIONINDEX_OFFSET UNITYSDK_OFFSET(0x60DA70)
#define IL2CPPCLASS_NAME_OFFSET UNITYSDK_OFFSET(0x20)
#define IL2CPPCLASS_GETNAMESPACE_OFFSET UNITYSDK_OFFSET(0x601E10)
#define IL2CPPCLASS_GETPARENT_OFFSET UNITYSDK_OFFSET(0x3CA17D0)
#define STATICFIELDSPOOL_OFFSET UNITYSDK_OFFSET(0x9C84E28)

inline HMODULE hIl2Cpp = NULL;

struct Il2CppClass
{
	static Il2CppClass* FromTypeDefinitionIndex(DWORD Index)
	{
		return ((Il2CppClass * (*)(DWORD))((PBYTE)hIl2Cpp + IL2CPPCLASS_FROMTYPEDEFINITIONINDEX_OFFSET))(Index);
	}

	LPCSTR GetName()
	{
		return *(LPCSTR*)((PBYTE)this + IL2CPPCLASS_NAME_OFFSET);
	}

	LPCSTR GetNamespace()
	{
		return ((LPCSTR(*)(PVOID))((PBYTE)hIl2Cpp + IL2CPPCLASS_GETNAMESPACE_OFFSET))(this);
	}

	Il2CppClass* GetParent()
	{
		return ((Il2CppClass * (*)(PVOID))((PBYTE)hIl2Cpp + IL2CPPCLASS_GETPARENT_OFFSET))(this);
	}

	PVOID GetStaticField(DWORD Offset)
	{
		PVOID StaticFields = *(PVOID*)((PBYTE)hIl2Cpp + STATICFIELDSPOOL_OFFSET);

		if (!StaticFields)
		{
			return NULL;
		}

		return (PBYTE)StaticFields + Offset;
	}
};

struct Il2CppObject
{
	union
	{
		Il2CppClass* klass;
		PVOID vtable;
	};

	PVOID monitor;
};

struct Il2CppArrayBounds
{
	SIZE_T length;
	SIZE_T lower_bound;
};

template <typename T>
struct Il2CppArray
{
	Il2CppObject obj;
	Il2CppArrayBounds* bounds;
	SIZE_T max_length;
	T vector[32];
};

namespace System
{
	using Void = void;
	using Boolean = bool;
	using Char = wchar_t;
	using SByte = int8_t;
	using Byte = uint8_t;
	using Int16 = int16_t;
	using UInt16 = uint16_t;
	using Int32 = int32_t;
	using UInt32 = uint32_t;
	using Int64 = int64_t;
	using UInt64 = uint64_t;
	using Single = float;
	using Double = double;
	using IntPtr = intptr_t;
	using UIntPtr = uintptr_t;
}
