#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_UI_EXTENSION_BASETEXTMESHRANGE_CONTAINSTRISTREAMINDEX_OFFSET UNITYSDK_OFFSET(0x888270)
#define UNITYENGINE_UI_EXTENSION_BASETEXTMESHRANGE_CONTAINSVERTEXRANGE_OFFSET UNITYSDK_OFFSET(0x888200)
#define UNITYENGINE_UI_EXTENSION_BASETEXTMESHRANGE_GET_QUADCOUNT_OFFSET UNITYSDK_OFFSET(0x8880D0)
#define UNITYENGINE_UI_EXTENSION_BASETEXTMESHRANGE_GET_QUADSTART_OFFSET UNITYSDK_OFFSET(0x8880C0)
#define UNITYENGINE_UI_EXTENSION_BASETEXTMESHRANGE_GET_TRISTREAMCOUNT_OFFSET UNITYSDK_OFFSET(0x888100)
#define UNITYENGINE_UI_EXTENSION_BASETEXTMESHRANGE_GET_TRISTREAMENDEXCLUSIVE_OFFSET UNITYSDK_OFFSET(0x888120)
#define UNITYENGINE_UI_EXTENSION_BASETEXTMESHRANGE_GET_TRISTREAMSTART_OFFSET UNITYSDK_OFFSET(0x8880E0)
#define UNITYENGINE_UI_EXTENSION_BASETEXTMESHRANGE_GET_VERTEXENDEXCLUSIVE_OFFSET UNITYSDK_OFFSET(0x8880B0)
#define UNITYENGINE_UI_EXTENSION_BASETEXTMESHRANGE_TOQUADINDEX_OFFSET UNITYSDK_OFFSET(0x8881A0)
#define UNITYENGINE_UI_EXTENSION_BASETEXTMESHRANGE_TOVERTEXINDEX_OFFSET UNITYSDK_OFFSET(0x888150)
#define UNITYENGINE_UI_EXTENSION_BASETEXTMESHRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x312BA0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int BaseTextMeshRange_TypeDefinitionIndex = 82991;

	struct alignas(4) BaseTextMeshRange
	{
		::System::Int32 vertexStart; // 0x10
		::System::Int32 vertexCount; // 0x14

		::System::Void _ctor(::System::Int32 vertexStart, ::System::Int32 vertexCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_BASETEXTMESHRANGE__CTOR_OFFSET))(this, vertexStart, vertexCount);
		}

		::System::Int32 get_VertexEndExclusive()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_BASETEXTMESHRANGE_GET_VERTEXENDEXCLUSIVE_OFFSET))(this);
		}

		::System::Int32 get_QuadStart()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_BASETEXTMESHRANGE_GET_QUADSTART_OFFSET))(this);
		}

		::System::Int32 get_QuadCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_BASETEXTMESHRANGE_GET_QUADCOUNT_OFFSET))(this);
		}

		::System::Int32 get_TriStreamStart()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_BASETEXTMESHRANGE_GET_TRISTREAMSTART_OFFSET))(this);
		}

		::System::Int32 get_TriStreamCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_BASETEXTMESHRANGE_GET_TRISTREAMCOUNT_OFFSET))(this);
		}

		::System::Int32 get_TriStreamEndExclusive()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_BASETEXTMESHRANGE_GET_TRISTREAMENDEXCLUSIVE_OFFSET))(this);
		}

		::System::Int32 ToVertexIndex(::System::Int32 textLocalMeshQuadIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_BASETEXTMESHRANGE_TOVERTEXINDEX_OFFSET))(this, textLocalMeshQuadIndex);
		}

		::System::Int32 ToQuadIndex(::System::Int32 textLocalMeshQuadIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_BASETEXTMESHRANGE_TOQUADINDEX_OFFSET))(this, textLocalMeshQuadIndex);
		}

		::System::Boolean ContainsVertexRange(::System::Int32 vertexIndex, ::System::Int32 count)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_BASETEXTMESHRANGE_CONTAINSVERTEXRANGE_OFFSET))(this, vertexIndex, count);
		}

		::System::Boolean ContainsTriStreamIndex(::System::Int32 triStreamIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_BASETEXTMESHRANGE_CONTAINSTRISTREAMINDEX_OFFSET))(this, triStreamIndex);
		}
	};
}
