#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/Poly2Tri/Orientation.h"

namespace UnityEngine::ProBuilder::Poly2Tri { class AdvancingFrontNode; }
namespace UnityEngine::ProBuilder::Poly2Tri { class DTSweepConstraint; }
namespace UnityEngine::ProBuilder::Poly2Tri { class DTSweepContext; }
namespace UnityEngine::ProBuilder::Poly2Tri { class DelaunayTriangle; }
namespace UnityEngine::ProBuilder::Poly2Tri { class TriangulationPoint; }

#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_BASINANGLE_OFFSET UNITYSDK_OFFSET(0x187B7120)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_EDGEEVENT_1_OFFSET UNITYSDK_OFFSET(0x187B4580)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_EDGEEVENT_OFFSET UNITYSDK_OFFSET(0x187B1E70)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FILLADVANCINGFRONT_OFFSET UNITYSDK_OFFSET(0x187B3720)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FILLBASINREQ_OFFSET UNITYSDK_OFFSET(0x187B73B0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FILLBASIN_OFFSET UNITYSDK_OFFSET(0x187B7190)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FILLEDGEEVENT_OFFSET UNITYSDK_OFFSET(0x187B4540)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FILLLEFTABOVEEDGEEVENT_OFFSET UNITYSDK_OFFSET(0x187B4B50)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FILLLEFTBELOWEDGEEVENT_OFFSET UNITYSDK_OFFSET(0x187B5840)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FILLLEFTCONCAVEEDGEEVENT_OFFSET UNITYSDK_OFFSET(0x187B56C0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FILLLEFTCONVEXEDGEEVENT_OFFSET UNITYSDK_OFFSET(0x187B54D0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FILLRIGHTABOVEEDGEEVENT_OFFSET UNITYSDK_OFFSET(0x187B4930)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FILLRIGHTBELOWEDGEEVENT_OFFSET UNITYSDK_OFFSET(0x187B50F0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FILLRIGHTCONCAVEEDGEEVENT_OFFSET UNITYSDK_OFFSET(0x187B4D70)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FILLRIGHTCONVEXEDGEEVENT_OFFSET UNITYSDK_OFFSET(0x187B4EF0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FILL_OFFSET UNITYSDK_OFFSET(0x187B31B0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FINALIZATIONCONVEXHULL_OFFSET UNITYSDK_OFFSET(0x187B11F0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FINALIZATIONPOLYGON_OFFSET UNITYSDK_OFFSET(0x187B1080)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FLIPEDGEEVENT_OFFSET UNITYSDK_OFFSET(0x187B5F00)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FLIPSCANEDGEEVENT_OFFSET UNITYSDK_OFFSET(0x187B6AF0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_HOLEANGLE_OFFSET UNITYSDK_OFFSET(0x187B7080)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_ISEDGESIDEOFTRIANGLE_OFFSET UNITYSDK_OFFSET(0x187B4370)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_ISSHALLOW_OFFSET UNITYSDK_OFFSET(0x187B75C0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_LEGALIZE_OFFSET UNITYSDK_OFFSET(0x187B3BA0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_NEWFRONTTRIANGLE_OFFSET UNITYSDK_OFFSET(0x187B34E0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_NEXTFLIPPOINT_OFFSET UNITYSDK_OFFSET(0x187B69D0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_NEXTFLIPTRIANGLE_OFFSET UNITYSDK_OFFSET(0x187B6720)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_POINTEVENT_OFFSET UNITYSDK_OFFSET(0x187B1B40)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_ROTATETRIANGLEPAIR_OFFSET UNITYSDK_OFFSET(0x187B24A0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_SWEEP_OFFSET UNITYSDK_OFFSET(0x187B0D50)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_TRIANGULATE_OFFSET UNITYSDK_OFFSET(0x187B0B00)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_TURNADVANCINGFRONTCONVEX_OFFSET UNITYSDK_OFFSET(0x187B2090)

namespace UnityEngine::ProBuilder::Poly2Tri
{
	inline static constexpr unsigned int DTSweep_TypeDefinitionIndex = 29782;

	class DTSweep : public ::System::Object
	{
	public:
		static ::System::Void Triangulate(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_TRIANGULATE_OFFSET))(tcx);
		}

		static ::System::Void Sweep(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_SWEEP_OFFSET))(tcx);
		}

		static ::System::Void FinalizationConvexHull(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FINALIZATIONCONVEXHULL_OFFSET))(tcx);
		}

		static ::System::Void TurnAdvancingFrontConvex(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* b, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* c)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_TURNADVANCINGFRONTCONVEX_OFFSET))(tcx, b, c);
		}

		static ::System::Void FinalizationPolygon(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FINALIZATIONPOLYGON_OFFSET))(tcx);
		}

		static ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* PointEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point)
		{
			return ((::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_POINTEVENT_OFFSET))(tcx, point);
		}

		static ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* NewFrontTriangle(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node)
		{
			return ((::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_NEWFRONTTRIANGLE_OFFSET))(tcx, point, node);
		}

		static ::System::Void EdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_EDGEEVENT_OFFSET))(tcx, edge, node);
		}

		static ::System::Void FillEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FILLEDGEEVENT_OFFSET))(tcx, edge, node);
		}

		static ::System::Void FillRightConcaveEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FILLRIGHTCONCAVEEDGEEVENT_OFFSET))(tcx, edge, node);
		}

		static ::System::Void FillRightConvexEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FILLRIGHTCONVEXEDGEEVENT_OFFSET))(tcx, edge, node);
		}

		static ::System::Void FillRightBelowEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FILLRIGHTBELOWEDGEEVENT_OFFSET))(tcx, edge, node);
		}

		static ::System::Void FillRightAboveEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FILLRIGHTABOVEEDGEEVENT_OFFSET))(tcx, edge, node);
		}

		static ::System::Void FillLeftConvexEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FILLLEFTCONVEXEDGEEVENT_OFFSET))(tcx, edge, node);
		}

		static ::System::Void FillLeftConcaveEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FILLLEFTCONCAVEEDGEEVENT_OFFSET))(tcx, edge, node);
		}

		static ::System::Void FillLeftBelowEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FILLLEFTBELOWEDGEEVENT_OFFSET))(tcx, edge, node);
		}

		static ::System::Void FillLeftAboveEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FILLLEFTABOVEEDGEEVENT_OFFSET))(tcx, edge, node);
		}

		static ::System::Boolean IsEdgeSideOfTriangle(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* triangle, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ep, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* eq)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_ISEDGESIDEOFTRIANGLE_OFFSET))(triangle, ep, eq);
		}

		static ::System::Void EdgeEvent_1(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ep, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* eq, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* triangle, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_EDGEEVENT_1_OFFSET))(tcx, ep, eq, triangle, point);
		}

		static ::System::Void FlipEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ep, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* eq, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FLIPEDGEEVENT_OFFSET))(tcx, ep, eq, t, p);
		}

		static ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* NextFlipPoint(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ep, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* eq, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* ot, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* op)
		{
			return ((::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*(*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_NEXTFLIPPOINT_OFFSET))(ep, eq, ot, op);
		}

		static ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* NextFlipTriangle(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::Orientation o, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* ot, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* op)
		{
			return ((::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::Orientation, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_NEXTFLIPTRIANGLE_OFFSET))(tcx, o, t, ot, p, op);
		}

		static ::System::Void FlipScanEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ep, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* eq, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* flipTriangle, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FLIPSCANEDGEEVENT_OFFSET))(tcx, ep, eq, flipTriangle, t, p);
		}

		static ::System::Void FillAdvancingFront(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* n)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FILLADVANCINGFRONT_OFFSET))(tcx, n);
		}

		static ::System::Void FillBasin(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FILLBASIN_OFFSET))(tcx, node);
		}

		static ::System::Void FillBasinReq(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FILLBASINREQ_OFFSET))(tcx, node);
		}

		static ::System::Boolean IsShallow(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_ISSHALLOW_OFFSET))(tcx, node);
		}

		static ::System::Double HoleAngle(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node)
		{
			return ((::System::Double(*)(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_HOLEANGLE_OFFSET))(node);
		}

		static ::System::Double BasinAngle(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node)
		{
			return ((::System::Double(*)(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_BASINANGLE_OFFSET))(node);
		}

		static ::System::Void Fill(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FILL_OFFSET))(tcx, node);
		}

		static ::System::Boolean Legalize(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_LEGALIZE_OFFSET))(tcx, t);
		}

		static ::System::Void RotateTrianglePair(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* ot, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* op)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_ROTATETRIANGLEPAIR_OFFSET))(t, p, ot, op);
		}
	};
}
