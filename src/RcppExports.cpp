// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// init_kernel
SEXP init_kernel(const std::string& connection_file);
RcppExport SEXP _JuniperKernel_init_kernel(SEXP connection_fileSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type connection_file(connection_fileSEXP);
    rcpp_result_gen = Rcpp::wrap(init_kernel(connection_file));
    return rcpp_result_gen;
END_RCPP
}
// boot_kernel
SEXP boot_kernel(SEXP kernel);
RcppExport SEXP _JuniperKernel_boot_kernel(SEXP kernelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type kernel(kernelSEXP);
    rcpp_result_gen = Rcpp::wrap(boot_kernel(kernel));
    return rcpp_result_gen;
END_RCPP
}
// the_xmock
SEXP the_xmock();
RcppExport SEXP _JuniperKernel_the_xmock() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(the_xmock());
    return rcpp_result_gen;
END_RCPP
}
// sock_recv
SEXP sock_recv(SEXP kernel, std::string sockName);
RcppExport SEXP _JuniperKernel_sock_recv(SEXP kernelSEXP, SEXP sockNameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type kernel(kernelSEXP);
    Rcpp::traits::input_parameter< std::string >::type sockName(sockNameSEXP);
    rcpp_result_gen = Rcpp::wrap(sock_recv(kernel, sockName));
    return rcpp_result_gen;
END_RCPP
}
// post_handle
void post_handle(SEXP kernel, Rcpp::List res, std::string sockName);
RcppExport SEXP _JuniperKernel_post_handle(SEXP kernelSEXP, SEXP resSEXP, SEXP sockNameSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type kernel(kernelSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type res(resSEXP);
    Rcpp::traits::input_parameter< std::string >::type sockName(sockNameSEXP);
    post_handle(kernel, res, sockName);
    return R_NilValue;
END_RCPP
}
// rebroadcast_input
void rebroadcast_input(SEXP kernel, const std::string& execution_input, const int execution_count);
RcppExport SEXP _JuniperKernel_rebroadcast_input(SEXP kernelSEXP, SEXP execution_inputSEXP, SEXP execution_countSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type kernel(kernelSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type execution_input(execution_inputSEXP);
    Rcpp::traits::input_parameter< const int >::type execution_count(execution_countSEXP);
    rebroadcast_input(kernel, execution_input, execution_count);
    return R_NilValue;
END_RCPP
}
// execute_result
void execute_result(SEXP kernel, Rcpp::List data);
RcppExport SEXP _JuniperKernel_execute_result(SEXP kernelSEXP, SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type kernel(kernelSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type data(dataSEXP);
    execute_result(kernel, data);
    return R_NilValue;
END_RCPP
}
// jk_device
void jk_device(SEXP kernel, std::string bg, double width, double height, double pointsize, bool standalone, Rcpp::List aliases);
RcppExport SEXP _JuniperKernel_jk_device(SEXP kernelSEXP, SEXP bgSEXP, SEXP widthSEXP, SEXP heightSEXP, SEXP pointsizeSEXP, SEXP standaloneSEXP, SEXP aliasesSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type kernel(kernelSEXP);
    Rcpp::traits::input_parameter< std::string >::type bg(bgSEXP);
    Rcpp::traits::input_parameter< double >::type width(widthSEXP);
    Rcpp::traits::input_parameter< double >::type height(heightSEXP);
    Rcpp::traits::input_parameter< double >::type pointsize(pointsizeSEXP);
    Rcpp::traits::input_parameter< bool >::type standalone(standaloneSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type aliases(aliasesSEXP);
    jk_device(kernel, bg, width, height, pointsize, standalone, aliases);
    return R_NilValue;
END_RCPP
}
// filter_comms
SEXP filter_comms(std::string target_name);
RcppExport SEXP _JuniperKernel_filter_comms(SEXP target_nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type target_name(target_nameSEXP);
    rcpp_result_gen = Rcpp::wrap(filter_comms(target_name));
    return rcpp_result_gen;
END_RCPP
}
// comm_request
void comm_request(const std::string type);
RcppExport SEXP _JuniperKernel_comm_request(SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string >::type type(typeSEXP);
    comm_request(type);
    return R_NilValue;
END_RCPP
}
// run_client
SEXP run_client(int hbport, int ioport, int shport, int ctport, int inport);
RcppExport SEXP _JuniperKernel_run_client(SEXP hbportSEXP, SEXP ioportSEXP, SEXP shportSEXP, SEXP ctportSEXP, SEXP inportSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type hbport(hbportSEXP);
    Rcpp::traits::input_parameter< int >::type ioport(ioportSEXP);
    Rcpp::traits::input_parameter< int >::type shport(shportSEXP);
    Rcpp::traits::input_parameter< int >::type ctport(ctportSEXP);
    Rcpp::traits::input_parameter< int >::type inport(inportSEXP);
    rcpp_result_gen = Rcpp::wrap(run_client(hbport, ioport, shport, ctport, inport));
    return rcpp_result_gen;
END_RCPP
}
// client_exec_request
void client_exec_request(SEXP jtc, std::string payload);
RcppExport SEXP _JuniperKernel_client_exec_request(SEXP jtcSEXP, SEXP payloadSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type jtc(jtcSEXP);
    Rcpp::traits::input_parameter< std::string >::type payload(payloadSEXP);
    client_exec_request(jtc, payload);
    return R_NilValue;
END_RCPP
}
// client_exec_reply
std::string client_exec_reply(SEXP jtc);
RcppExport SEXP _JuniperKernel_client_exec_reply(SEXP jtcSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type jtc(jtcSEXP);
    rcpp_result_gen = Rcpp::wrap(client_exec_reply(jtc));
    return rcpp_result_gen;
END_RCPP
}
// wait_for_hb
void wait_for_hb(SEXP jtc);
RcppExport SEXP _JuniperKernel_wait_for_hb(SEXP jtcSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type jtc(jtcSEXP);
    wait_for_hb(jtc);
    return R_NilValue;
END_RCPP
}
// iopub_recv
std::string iopub_recv(SEXP jtc);
RcppExport SEXP _JuniperKernel_iopub_recv(SEXP jtcSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type jtc(jtcSEXP);
    rcpp_result_gen = Rcpp::wrap(iopub_recv(jtc));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_JuniperKernel_init_kernel", (DL_FUNC) &_JuniperKernel_init_kernel, 1},
    {"_JuniperKernel_boot_kernel", (DL_FUNC) &_JuniperKernel_boot_kernel, 1},
    {"_JuniperKernel_the_xmock", (DL_FUNC) &_JuniperKernel_the_xmock, 0},
    {"_JuniperKernel_sock_recv", (DL_FUNC) &_JuniperKernel_sock_recv, 2},
    {"_JuniperKernel_post_handle", (DL_FUNC) &_JuniperKernel_post_handle, 3},
    {"_JuniperKernel_rebroadcast_input", (DL_FUNC) &_JuniperKernel_rebroadcast_input, 3},
    {"_JuniperKernel_execute_result", (DL_FUNC) &_JuniperKernel_execute_result, 2},
    {"_JuniperKernel_jk_device", (DL_FUNC) &_JuniperKernel_jk_device, 7},
    {"_JuniperKernel_filter_comms", (DL_FUNC) &_JuniperKernel_filter_comms, 1},
    {"_JuniperKernel_comm_request", (DL_FUNC) &_JuniperKernel_comm_request, 1},
    {"_JuniperKernel_run_client", (DL_FUNC) &_JuniperKernel_run_client, 5},
    {"_JuniperKernel_client_exec_request", (DL_FUNC) &_JuniperKernel_client_exec_request, 2},
    {"_JuniperKernel_client_exec_reply", (DL_FUNC) &_JuniperKernel_client_exec_reply, 1},
    {"_JuniperKernel_wait_for_hb", (DL_FUNC) &_JuniperKernel_wait_for_hb, 1},
    {"_JuniperKernel_iopub_recv", (DL_FUNC) &_JuniperKernel_iopub_recv, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_JuniperKernel(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
