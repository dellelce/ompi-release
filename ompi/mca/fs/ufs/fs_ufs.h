/*
 * Copyright (c) 2004-2005 The Trustees of Indiana University and Indiana
 *                         University Research and Technology
 *                         Corporation.  All rights reserved.
 * Copyright (c) 2004-2006 The University of Tennessee and The University
 *                         of Tennessee Research Foundation.  All rights
 *                         reserved.
 * Copyright (c) 2004-2005 High Performance Computing Center Stuttgart, 
 *                         University of Stuttgart.  All rights reserved.
 * Copyright (c) 2004-2005 The Regents of the University of California.
 *                         All rights reserved.
 * Copyright (c) 2008-2011 University of Houston. All rights reserved.
 * $COPYRIGHT$
 * 
 * Additional copyrights may follow
 * 
 * $HEADER$
 */

#ifndef MCA_FS_UFS_H
#define MCA_FS_UFS_H

#include "ompi_config.h"
#include "opal/mca/mca.h"
#include "ompi/mca/fs/fs.h"
#include "ompi/mca/io/ompio/io_ompio.h"

extern int mca_fs_ufs_priority;

BEGIN_C_DECLS

int mca_fs_ufs_component_init_query(bool enable_progress_threads,
                                        bool enable_mpi_threads);
struct mca_fs_base_module_1_0_0_t *
mca_fs_ufs_component_file_query (mca_io_ompio_file_t *fh, int *priority);
int mca_fs_ufs_component_file_unquery (mca_io_ompio_file_t *file);

int mca_fs_ufs_module_init (mca_io_ompio_file_t *file);
int mca_fs_ufs_module_finalize (mca_io_ompio_file_t *file);

OMPI_MODULE_DECLSPEC extern mca_fs_base_component_2_0_0_t mca_fs_ufs_component;
/*
 * ******************************************************************
 * ********* functions which are implemented in this module *********
 * ******************************************************************
 */ 

int mca_fs_ufs_file_open (struct ompi_communicator_t *comm, 
                          char *filename, 
                          int amode,
                          struct ompi_info_t *info, 
                          mca_io_ompio_file_t *fh);

int mca_fs_ufs_file_close (mca_io_ompio_file_t *fh);
    
int mca_fs_ufs_file_delete (char *filename,
                            struct ompi_info_t *info);

int mca_fs_ufs_file_set_size (mca_io_ompio_file_t *fh,
                              OMPI_MPI_OFFSET_TYPE size);

int mca_fs_ufs_file_get_size (mca_io_ompio_file_t *fh, 
                              OMPI_MPI_OFFSET_TYPE *size);

int mca_fs_ufs_file_set_info (mca_io_ompio_file_t *fh, 
                              struct ompi_info_t *info);

int mca_fs_ufs_file_sync (mca_io_ompio_file_t *fh);

int mca_fs_ufs_file_seek (mca_io_ompio_file_t *fh,
                          OMPI_MPI_OFFSET_TYPE offset,
                          int whence);
/*
 * ******************************************************************
 * ************ functions implemented in this module end ************
 * ******************************************************************
 */ 
                                     
END_C_DECLS

#endif /* MCA_FS_UFS_H */
